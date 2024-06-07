#ifndef DAMAGE_STRATEGY_H
#define DAMAGE_STRATEGY_H

#include "AbstractAlertLevelStrategy.h"

class DamageStrategy : public AbstractAlertLevelStrategy {
public:
    DamageStrategy() = default;
    ~DamageStrategy() = default;
    AlertLevel calculateAlertLevel(Vitals& vitals, Patient* patient) override;
};

#endif // DAMAGE_STRATEGY_H