#ifndef DAMAGE_STRATEGY_H
#define DAMAGE_STRATEGY_H

#include "AbstractAlertLevelStrategy.h"

class DamageStrategy : public AbstractAlertLevelStrategy {
public:
    AlertLevel calculateAlertLevel(Vitals& vitals, int age);
};

#endif // DAMAGE_STRATEGY_H