#include "AlertLevelStrategyComposite.h"

AlertLevelStrategyComposite::AlertLevelStrategyComposite() {

}

void AlertLevelStrategyComposite::addStrategy(std::unique_ptr<AbstractAlertLevelStrategy> strategy) {
	_strategies.push_back(std::move(strategy));
}

AlertLevel AlertLevelStrategyComposite::calculateAlertLevel(Vitals& vitals) {
	return AlertLevel();
}

AlertLevel AlertLevelStrategyComposite::calculateAlertLevel(Vitals& vitals, int age) {
	AlertLevel newAlertLevel = AlertLevel::Green;

	for (const auto& strategy : _strategies)
	{
		
		if (strategy->calculateAlertLevel(vitals, age) >= newAlertLevel) {
			newAlertLevel = strategy->calculateAlertLevel(vitals, age);
		}
		
	}


	return newAlertLevel;
}