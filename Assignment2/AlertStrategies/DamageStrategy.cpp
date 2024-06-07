#include "DamageStrategy.h"

AlertLevel DamageStrategy::calculateAlertLevel(Vitals& vitals, Patient* patient)
{
    if (patient->age() >= 35 && vitals.BA() < 20) {
        return AlertLevel::Red;
    }

    return AlertLevel::Green;
}
