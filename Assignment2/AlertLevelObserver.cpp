#include "AlertLevelObserver.h"

AlertLevelObserver::AlertLevelObserver() {
	_hospitalAlertSystemFacade = std::make_unique<HospitalAlertSystemFacade>();
	_GPNotificationSystemFacade = std::make_unique<GPNotificationSystemFacade>();
}

void AlertLevelObserver::notify(Patient* p) {

	_hospitalAlertSystemFacade->sendAlertForPatient(p);
	_GPNotificationSystemFacade->sendGPNotificationForPatient(p);
}
