#ifndef DAMAGE_STRATEGY_H
#define DAMAGE_STRATEGY_H

#include "AbstractAlertLevelStrategy.h"

class DamageStrategy : public AbstractAlertLevelStrategy {
public:
    DamageStrategy() = default;
    ~DamageStrategy() = default;
    // Inherited via AbstractAlertLevelStrategy. Empty implementation.
    AlertLevel calculateAlertLevel(Vitals& vitals) override;
    // Inherited via AbstractAlertLevelStrategy. Main Implementation of DamageStrategy. Calculate the alert level based on the vitals and patient's age.
    AlertLevel calculateAlertLevel(Vitals& vitals, int age) override;
};

#endif // DAMAGE_STRATEGY_H