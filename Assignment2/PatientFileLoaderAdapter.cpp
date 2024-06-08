#include "PatientFileLoaderAdapter.h"
#include "PatientFileLoader.h"

void PatientFileLoaderAdapter::initialiseConnection() {

}

void PatientFileLoaderAdapter::loadPatients(std::vector<Patient*>& patientIn) {
	PatientFileLoader* pfl = new PatientFileLoader("patients.txt");

	for (Patient* p : pfl->loadPatientFile()) {
		patientIn.push_back(p);
	}

	delete pfl;
	pfl = nullptr;
}

void PatientFileLoaderAdapter::closeConnection() {

}
