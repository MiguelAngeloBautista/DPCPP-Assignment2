#include "AlertLevelStrategyComposite.h"

void AlertLevelStrategyComposite::addStrategy(AbstractAlertLevelStrategy& strategy) {

}

AlertLevel AlertLevelStrategyComposite::calculateAlertLevel(Vitals& vitals, int age) {
	for (AbstractAlertLevelStrategy* strategy : strategies)
	{
		if (typeid(strategy).name() == "TicctoccBrainStrategy" or typeid(strategy).name() == "DamageStrategy") {
			return strategy->calculateAlertLevel(vitals, age);
		}
		else {
			return strategy->calculateAlertLevel(vitals);
		}
	}
}