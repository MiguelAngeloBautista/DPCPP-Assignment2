#include "DamageStrategy.h"

AlertLevel DamageStrategy::calculateAlertLevel(Vitals& vitals, int age)
{
    if (age >= 35 && vitals.BA() < 20) {
        return AlertLevel::Red;
    }

    return AlertLevel::Green;
}
