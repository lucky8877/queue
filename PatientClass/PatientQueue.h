#pragma once
#include "patient.h"

class PatientQueue{
    private:
        Patient** _patient_I;
        Patient** _patient_II;
        Patient** _patient_III;
        size_t _pIs;
        size_t pIIs;
        size_t _pIIIs;

    public:
        PatientQueue();
        ~PatientQueue();
        Patient* GetNext();
        void AddPatient(Patient *p);
};