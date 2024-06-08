#ifndef ALERT_LEVEL_STRATEGY_COMPOSITE_H
#define ALERT_LEVEL_STRATEGY_COMPOSITE_H

#include <vector>
#include "AbstractAlertLevelStrategy.h"
#include "../Patient.h"

class AlertLevelStrategyComposite : public AbstractAlertLevelStrategy {
public:
	AlertLevelStrategyComposite();
	~AlertLevelStrategyComposite() = default;
	// Add a strategy to the composite.
	void addStrategy(std::unique_ptr<AbstractAlertLevelStrategy> strategy);
	// Inherited via AbstractAlertLevelStrategy. Empty implementation.
	AlertLevel calculateAlertLevel(Vitals& vitals) override;
	// Inherited via AbstractAlertLevelStrategy. Implementation of the composite pattern.
	AlertLevel calculateAlertLevel(Vitals& vitals, int age) override;
private:
	std::vector<std::unique_ptr<AbstractAlertLevelStrategy>> _strategies;
};

#endif // ALERT_LEVEL_STRATEGY_COMPOSITE