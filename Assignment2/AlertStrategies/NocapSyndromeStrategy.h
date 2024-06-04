#ifndef NOCAP_SYNDROME_STRATEGY_H
#define NOCAP_SYNDROME_STRATEGY_H

#include "AbstractAlertLevelStrategy.h"

class NocapSyndromeStrategy : public AbstractAlertLevelStrategy {
public:
    AlertLevel calculateAlertLevel(Vitals& vitals);
};

#endif // NOCAP_SYNDROME_STRATEGY_H