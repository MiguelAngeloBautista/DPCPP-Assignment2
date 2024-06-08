#ifndef ALERT_LEVEL_OBSERVER_H
#define ALERT_LEVEL_OBSERVER_H

#include "Patient.h"
#include "HospitalAlertSystemFacade.h"
#include "GPNotificationSystemFacade.h"

class AlertLevelObserver {
public:
	AlertLevelObserver();
	~AlertLevelObserver() = default;
	// Notify the hospital alert system and GP notification system
	void notify(Patient* p);
private:
	std::unique_ptr<HospitalAlertSystemFacade> _hospitalAlertSystemFacade;
	std::unique_ptr<GPNotificationSystemFacade> _GPNotificationSystemFacade;
};

#endif // !ALERT_LEVEL_OBSERVER_H
