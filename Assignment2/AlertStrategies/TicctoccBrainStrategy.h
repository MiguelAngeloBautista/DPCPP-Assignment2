#ifndef TICCTOCC_BRAIN_STRATEGY_H
#define TICCTOCC_BRAIN_STRATEGY_H

//#include "../Patient.h"
#include "AbstractAlertLevelStrategy.h"


class TicctoccBrainStrategy : public AbstractAlertLevelStrategy {
public:
    AlertLevel calculateAlertLevel(Vitals& vitals, int age);
};

#endif // TICCTOCC_BRAIN_STRATEGY_H