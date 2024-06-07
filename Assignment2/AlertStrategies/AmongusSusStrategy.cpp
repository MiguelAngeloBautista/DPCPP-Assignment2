#include "AmongusSusStrategy.h"

AlertLevel AmongusSusStrategy::calculateAlertLevel(Vitals& vitals, Patient* patient)
{
    if (vitals.HR() > 220) {
        return AlertLevel::Red;
    }
    else if (vitals.HR() > 210) {
        return AlertLevel::Orange;
    }
    else if (vitals.HR() > 200) {
        return AlertLevel::Yellow;
    }

    return AlertLevel::Green;
}
