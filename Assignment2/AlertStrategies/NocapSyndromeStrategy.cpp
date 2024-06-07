#include "NocapSyndromeStrategy.h"

AlertLevel NocapSyndromeStrategy::calculateAlertLevel(Vitals& vitals)
{
    if (vitals.SPO2() < 90) {
        return AlertLevel::Red;
    }
    else if (vitals.SPO2() < 92) {
        return AlertLevel::Orange;
    }
    else if (vitals.SPO2() < 94) {
        return AlertLevel::Yellow;
    }

    return AlertLevel::Green;
}
