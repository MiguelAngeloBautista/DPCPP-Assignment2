#ifndef E_RUSH_STRATEGY_H
#define E_RUSH_STRATEGY_H

#include "AbstractAlertLevelStrategy.h"

class ERushStrategy : public AbstractAlertLevelStrategy {
public:
    ERushStrategy() = default;
    ~ERushStrategy() = default;
    AlertLevel calculateAlertLevel(Vitals& vitals, Patient* patient) override;
};

#endif // E_RUSH_STRATEGY_H