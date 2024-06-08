#ifndef PATIENT_FILE_LOADER_ADAPTER_H
#define PATIENT_FILE_LOADER_ADAPTER_H

#include "AbstractPatientDatabaseLoader.h"

class PatientFileLoaderAdapter : public AbstractPatientDatabaseLoader {
public:
    void initialiseConnection() override;
    void loadPatients(std::vector<Patient*>& patientIn) override;
    void closeConnection() override;
};

#endif // !PATIENT_FILE_LOADER_ADAPTER_H
