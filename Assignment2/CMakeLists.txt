# CMakeList.txt : CMake project for Assignment2, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Assignment2 "AbstractPatientDatabaseLoader.h"
    "GPNotificationSystemFacade.cpp" "GPNotificationSystemFacade.h"
    "HospitalAlertSystemFacade.cpp" "HospitalAlertSystemFacade.cpp"
    "main.cpp"
    "Patient.cpp" "Patient.h"
    "PatientAlertLevels.h"
    "PatientDatabaseLoader.cpp" "PatientDatabaseLoader.h"
    "PatientFileLoader.cpp" "PatientFileLoader.h"
    "PatientManagementSystem.cpp" "PatientManagementSystem.h"
    "Person.cpp" "Person.h"
    "Vitals.cpp" "Vitals.h" "AlertStrategies/AmongusSusStrategy.h" "AlertStrategies/ERushStrategy.h" "AlertStrategies/AbstractAlertLevelStrategy.h" "AlertStrategies/AmongusSusStrategy.cpp" "AlertStrategies/DamageStrategy.cpp" "AlertStrategies/ERushStrategy.cpp" "AlertStrategies/NocapSyndromeStrategy.cpp" "AlertStrategies/TicctoccBrainStrategy.cpp" "AlertStrategies/AlertLevelStrategyComposite.cpp" "VitalsObserver.h" "VitalsObserver.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Assignment2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
