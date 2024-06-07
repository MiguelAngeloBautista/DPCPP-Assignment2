#include "TicctoccBrainStrategy.h"

AlertLevel TicctoccBrainStrategy::calculateAlertLevel(Vitals& vitals) {
    return AlertLevel();
}

AlertLevel TicctoccBrainStrategy::calculateAlertLevel(Vitals& vitals, int age)
{
    if (age < 35 && vitals.BA() < 10) {
        return AlertLevel::Red;
    }

    return AlertLevel::Green;
}
