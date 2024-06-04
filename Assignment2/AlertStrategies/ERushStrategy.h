#ifndef E_RUSH_STRATEGY_H
#define E_RUSH_STRATEGY_H

#include "AbstractAlertLevelStrategy.h"

class ERushStrategy : public AbstractAlertLevelStrategy {
public:
    AlertLevel calculateAlertLevel(Vitals& vitals);
};

#endif // E_RUSH_STRATEGY_H