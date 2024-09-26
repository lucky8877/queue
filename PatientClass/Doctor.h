#pragma once
#include "patient.h"


class Doctor {
    string _drugs[3] {"no-spa", "nurofen", "kagocel"};
    Patient *_currentPatient;
    public:
        void TakePatient(Patient *p);
        void PrintProblem(Patient *p);
        void FillDiagnosis(Diag *diag);
};

