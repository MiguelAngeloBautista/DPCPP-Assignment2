#ifndef AMONG_SUS_STRATEGY_H
#define AMONG_SUS_STRATEGY_H

#include "AbstractAlertLevelStrategy.h"

class AmongSusStrategy : public AbstractAlertLevelStrategy {
public:
    AlertLevel calculateAlertLevel(Vitals& vitals);
};

#endif // AMONG_SUS_STRATEGY_H