#ifndef NOCAP_SYNDROME_STRATEGY_H
#define NOCAP_SYNDROME_STRATEGY_H

#include "AbstractAlertLevelStrategy.h"

class NocapSyndromeStrategy : public AbstractAlertLevelStrategy {
public:
    NocapSyndromeStrategy() = default;
    ~NocapSyndromeStrategy() = default;
    AlertLevel calculateAlertLevel(Vitals& vitals, Patient* patient) override;
};

#endif // NOCAP_SYNDROME_STRATEGY_H