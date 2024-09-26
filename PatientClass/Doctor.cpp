#include "Doctor.h"

void Doctor::TakePatient(Patient *p) {
    _currentPatient = p;
};

void Doctor::PrintProblem(Patient *p){
    cout<<p->GetProblem()<<"\n";
};

void Doctor::FillDiagnosis(Diag *diag){
    string problem = _currentPatient->GetProblem();
};