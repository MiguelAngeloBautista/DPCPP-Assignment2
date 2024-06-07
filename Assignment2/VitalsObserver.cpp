#include "VitalsObserver.h"

VitalsObserver::VitalsObserver() {

}

void VitalsObserver::update(Patient* patient, Vitals* v) {
	//Create a new alert level strategy for this update instance
	_alertLevelStrategy = std::make_unique<AlertLevelStrategyComposite>();

	// Check the diagnoses of the patient and add the appropriate strategy to the composite
	for (int i = 0; i < patient->diagnoses().size(); i++) {
		std::string disease = patient->diagnoses().at(i);

		if (disease == "NocapSyndrome") {
			std::cout << "NocapSyndrome" << std::endl;
			_alertLevelStrategy->addStrategy(std::make_unique<NocapSyndromeStrategy>());
		}
		else if (disease == "TicctoccBrainDamage") {
			std::cout << "TiccToccBrain" << std::endl;
			_alertLevelStrategy->addStrategy(std::make_unique<TicctoccBrainStrategy>());
		}
		else if (disease == "Damage") {
			std::cout << "Damage" << std::endl;
			_alertLevelStrategy->addStrategy(std::make_unique<DamageStrategy>());
		}
		else if (disease == "ERush") {
			std::cout << "ERush" << std::endl;
			_alertLevelStrategy->addStrategy(std::make_unique<ERushStrategy>());
		}
		else if (disease == "AmongusSus") {
			std::cout << "AmongusSus" << std::endl;
			_alertLevelStrategy->addStrategy(std::make_unique<AmongusSusStrategy>());
		}
	}

	AlertLevel newAlertLevel = _alertLevelStrategy->calculateAlertLevel(*v, patient);

	//Set the new alert level
	patient->setAlertLevel(newAlertLevel);
}
