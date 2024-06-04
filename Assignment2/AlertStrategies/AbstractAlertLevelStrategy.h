#ifndef ABSTRACT_ALERT_LEVEL_STRATEGY_H
#define ABSTRACT_ALERT_LEVEL_STRATEGY_H

#include "../Vitals.h"

enum class AlertLevel { Green, Yellow, Orange, Red};

class AbstractAlertLevelStrategy {
public:
    virtual AlertLevel calculateAlertLevel(Vitals& vitals) = 0;
    virtual AlertLevel calculateAlertLevel(Vitals& vitals, int age) = 0;
};

#endif //ABSTRACT_ALERT_LEVEL_STRATEGY