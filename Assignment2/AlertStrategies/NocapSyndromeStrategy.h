#ifndef NOCAP_SYNDROME_STRATEGY_H
#define NOCAP_SYNDROME_STRATEGY_H

#include "AbstractAlertLevelStrategy.h"

class NocapSyndromeStrategy : public AbstractAlertLevelStrategy {
public:
    NocapSyndromeStrategy() = default;
    ~NocapSyndromeStrategy() = default;
    // Inherited via AbstractAlertLevelStrategy. Calculate the alert level based on the vitals.
    AlertLevel calculateAlertLevel(Vitals& vitals) override;
};

#endif // NOCAP_SYNDROME_STRATEGY_H