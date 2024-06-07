#include "AlertLevelStrategyComposite.h"

AlertLevelStrategyComposite::AlertLevelStrategyComposite() {

}

void AlertLevelStrategyComposite::addStrategy(std::unique_ptr<AbstractAlertLevelStrategy> strategy) {
	_strategies.push_back(std::move(strategy));
}

AlertLevel AlertLevelStrategyComposite::calculateAlertLevel(Vitals& vitals, Patient* patient) {
	AlertLevel newAlertLevel = AlertLevel::Green;

	for (const auto& strategy : _strategies)
	{
		
		if (strategy->calculateAlertLevel(vitals, patient) >= newAlertLevel) {
			newAlertLevel = strategy->calculateAlertLevel(vitals, patient);
		}
		
	}


	return newAlertLevel;
}