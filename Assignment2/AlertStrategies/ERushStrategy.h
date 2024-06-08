#ifndef E_RUSH_STRATEGY_H
#define E_RUSH_STRATEGY_H

#include "AbstractAlertLevelStrategy.h"

class ERushStrategy : public AbstractAlertLevelStrategy {
public:
    ERushStrategy() = default;
    ~ERushStrategy() = default;
    // Inherited via AbstractAlertLevelStrategy. Calculate the alert level based on the vitals.
    AlertLevel calculateAlertLevel(Vitals& vitals) override;
};

#endif // E_RUSH_STRATEGY_H