#ifndef ABSTRACT_ALERT_LEVEL_STRATEGY_H
#define ABSTRACT_ALERT_LEVEL_STRATEGY_H

#include "../Vitals.h"
#include "../PatientAlertLevels.h"
#include "../Patient.h"

class AbstractAlertLevelStrategy {
public:
    AbstractAlertLevelStrategy() = default;
    virtual ~AbstractAlertLevelStrategy() = default;
    virtual AlertLevel calculateAlertLevel(Vitals& vitals, Patient* patient) = 0;
};

#endif //ABSTRACT_ALERT_LEVEL_STRATEGY