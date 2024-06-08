#ifndef ABSTRACT_ALERT_LEVEL_STRATEGY_H
#define ABSTRACT_ALERT_LEVEL_STRATEGY_H

#include "../Vitals.h"
#include "../PatientAlertLevels.h"
#include "../Patient.h"

class AbstractAlertLevelStrategy {
public:
    AbstractAlertLevelStrategy() = default;
    virtual ~AbstractAlertLevelStrategy() = default;
    // calculateAlertLevel is the method that will be called to calculate the alert level based on the vitals. It is the default calculateAlertLevel function
    virtual AlertLevel calculateAlertLevel(Vitals& vitals) = 0;
    // calculateAlertLevel with age parameter is used for strategies that need to consider the patient's age. Default implementation calls the other calculateAlertLevel function.
    virtual AlertLevel calculateAlertLevel(Vitals& vitals, int age) { return calculateAlertLevel(vitals); };
};

#endif //ABSTRACT_ALERT_LEVEL_STRATEGY