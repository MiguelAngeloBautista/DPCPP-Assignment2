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
			_alertLevelStrategy->addStrategy(std::make_unique<NocapSyndromeStrategy>());
		}
		else if (disease == "TicctoccBrainDamage") {
			_alertLevelStrategy->addStrategy(std::make_unique<TicctoccBrainStrategy>());
		}
		else if (disease == "Damage") {
			_alertLevelStrategy->addStrategy(std::make_unique<DamageStrategy>());
		}
		else if (disease == "ERush") {
			_alertLevelStrategy->addStrategy(std::make_unique<ERushStrategy>());
		}
		else if (disease == "AmongusSus") {
			_alertLevelStrategy->addStrategy(std::make_unique<AmongusSusStrategy>());
		}
	}

	AlertLevel newAlertLevel = _alertLevelStrategy->calculateAlertLevel(*v, patient->age());

	//Set the new alert level
	patient->setAlertLevel(newAlertLevel);
}
