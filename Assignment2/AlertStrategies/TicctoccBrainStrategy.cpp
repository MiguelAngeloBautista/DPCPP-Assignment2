#include "TicctoccBrainStrategy.h"

AlertLevel TicctoccBrainStrategy::calculateAlertLevel(Vitals& vitals, Patient* patient)
{
    if (patient->age() < 35 && vitals.BA() < 10) {
        return AlertLevel::Red;
    }

    return AlertLevel::Green;
}
