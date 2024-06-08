#include "PatientFileLoader.h"

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

#include "Patient.h"
#include "Vitals.h"

PatientFileLoader::PatientFileLoader(const std::string& file) :
    _file(file)
{
}

std::vector<Patient*> PatientFileLoader::loadPatientFile()
{
    std::vector<Patient*> patients;

    std::ifstream inFile(_file);
    if (inFile.is_open()) {
        std::string line;
        
        while (std::getline(inFile, line)) {
            std::istringstream ssLine(line);
			std::string id;
			std::string dob;
			std::string name;
			std::string diagnosis;
			std::string vitals;

			std::getline(ssLine, id, '/');
			std::getline(ssLine, dob, '/');
			std::getline(ssLine, name, '/');
			std::getline(ssLine, diagnosis, '/');
			std::getline(ssLine, vitals);

			std::tm t{ };
			std::istringstream ssDob(dob);
			ssDob >> std::get_time(&t, "%d-%m-%Y");

			std::istringstream ssName(name);
			std::string firstName;
			std::string lastName;
			std::getline(ssName, lastName, ',');
			std::getline(ssName, firstName);

			Patient* p = new Patient(firstName, lastName, t);

			std::istringstream ssDiag(diagnosis);
			std::string diag;
			while (std::getline(ssDiag, diag, ',')) {
				p->addDiagnosis(diag);
			}

			std::istringstream ssVits(vitals);
			std::string vit;
			while (std::getline(ssVits, vit, ';')) {
				std::istringstream ssV(vit);
				int HR;
				int spo2;
				int temp;
				int BA;

				ssV >> HR;
				ssV.ignore(1); // Skips the delimiters
				ssV >> spo2;
				ssV.ignore(1);
				ssV >> temp;
				ssV.ignore(1);
				ssV >> BA;

				Vitals* v = new Vitals(HR, spo2, temp, BA);
				p->addVitals(v);
			}
			patients.push_back(p);


        }

    } else if (!inFile.is_open()) {
		std::cerr << "File not opened. Please put patient file inside the same directory as the exe" << std::endl;
	}

    return patients;
}
