#ifndef TICCTOCC_BRAIN_STRATEGY_H
#define TICCTOCC_BRAIN_STRATEGY_H

//#include "../Patient.h"
#include "AbstractAlertLevelStrategy.h"


class TicctoccBrainStrategy : public AbstractAlertLevelStrategy {
public:
    TicctoccBrainStrategy() = default;
    ~TicctoccBrainStrategy() = default;
    AlertLevel calculateAlertLevel(Vitals& vitals, Patient* patient) override;
};

#endif // TICCTOCC_BRAIN_STRATEGY_H