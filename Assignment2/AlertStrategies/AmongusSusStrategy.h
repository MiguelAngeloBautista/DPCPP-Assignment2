#ifndef AMONG_SUS_STRATEGY_H
#define AMONG_SUS_STRATEGY_H

#include "AbstractAlertLevelStrategy.h"

class AmongusSusStrategy : public AbstractAlertLevelStrategy {
public:
    AmongusSusStrategy() = default;
    ~AmongusSusStrategy() = default;
    // Inherited via AbstractAlertLevelStrategy. Calculate the alert level based on the vitals.
    AlertLevel calculateAlertLevel(Vitals& vitals) override;
};

#endif // AMONG_SUS_STRATEGY_H