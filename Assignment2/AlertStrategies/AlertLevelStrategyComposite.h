#ifndef ALERT_LEVEL_STRATEGY_COMPOSITE_H
#define ALERT_LEVEL_STRATEGY_COMPOSITE_H

#include "AbstractAlertLevelStrategy.h"
#include <vector>

class AlertLevelStrategyComposite : public AbstractAlertLevelStrategy {
public:
	void addStrategy(AbstractAlertLevelStrategy& strategy);
	AlertLevel calculateAlertLevel(Vitals& vitals, int age) override;
private:
	std::vector<AbstractAlertLevelStrategy*> strategies;
};

#endif // ALERT_LEVEL_STRATEGY_COMPOSITE