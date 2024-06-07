#ifndef VITALS_OBSERVER_H
#define VITALS_OBSERVER_H

#include "Patient.h"
#include "Vitals.h"
#include "AlertStrategies/AlertLevelStrategyComposite.h"
#include "AlertStrategies/AmongusSusStrategy.h"
#include "AlertStrategies/NocapSyndromeStrategy.h"
#include "AlertStrategies/TicctoccBrainStrategy.h"
#include "AlertStrategies/DamageStrategy.h"
#include "AlertStrategies/ERushStrategy.h"


class VitalsObserver {
public:
	VitalsObserver();
	~VitalsObserver() = default;

	// Update the observer and check the alert level of the patient. Then sets the alert level of the patient
	void update(Patient*, Vitals*);
private:
	std::unique_ptr<AlertLevelStrategyComposite> _alertLevelStrategy;
};

#endif // VITALS_OBSERVER_H