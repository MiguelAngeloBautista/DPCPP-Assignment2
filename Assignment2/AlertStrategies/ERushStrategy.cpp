#include "ERushStrategy.h"

AlertLevel ERushStrategy::calculateAlertLevel(Vitals& vitals)
{
    if (vitals.BT() > 38) {
        if (vitals.BA() > 110) {
            return AlertLevel::Red;
        }
        else if (vitals.BA() > 100) {
            return AlertLevel::Yellow;
        }
    }

    return AlertLevel::Green;
}
