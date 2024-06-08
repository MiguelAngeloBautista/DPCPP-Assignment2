#ifndef TICCTOCC_BRAIN_STRATEGY_H
#define TICCTOCC_BRAIN_STRATEGY_H

//#include "../Patient.h"
#include "AbstractAlertLevelStrategy.h"


class TicctoccBrainStrategy : public AbstractAlertLevelStrategy {
public:
    TicctoccBrainStrategy() = default;
    ~TicctoccBrainStrategy() = default;
    // Inherited via AbstractAlertLevelStrategy. Empty implementation.
    AlertLevel calculateAlertLevel(Vitals& vitals) override;
    // Inherited via AbstractAlertLevelStrategy. Main Implementation of TicctoccBrainStrategy. Calculate the alert level based on the vitals and patient's age.
    AlertLevel calculateAlertLevel(Vitals& vitals, int age) override;
};

#endif // TICCTOCC_BRAIN_STRATEGY_H