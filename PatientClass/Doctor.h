#pragma once
#include <patient.h>

class Doctor {
    string*_drugs {};
    public:
        void TakePatient(Patient* p);
        void PrintProblem(Patient* p);
        void FillDiagnosis(Diag *diag);
};

