#ifndef ALERT_LEVEL_STRATEGY_COMPOSITE_H
#define ALERT_LEVEL_STRATEGY_COMPOSITE_H

#include <vector>
#include "AbstractAlertLevelStrategy.h"
#include "../Patient.h"

class AlertLevelStrategyComposite : public AbstractAlertLevelStrategy {
public:
	AlertLevelStrategyComposite();
	~AlertLevelStrategyComposite() = default;
	void addStrategy(std::unique_ptr<AbstractAlertLevelStrategy> strategy);
	AlertLevel calculateAlertLevel(Vitals& vitals) override;
	AlertLevel calculateAlertLevel(Vitals& vitals, int age) override;
private:
	std::vector<std::unique_ptr<AbstractAlertLevelStrategy>> _strategies;
};

#endif // ALERT_LEVEL_STRATEGY_COMPOSITE