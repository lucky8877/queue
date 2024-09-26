#include "patient.h"

Patient::Patient(string name, string patronomic, string surname, string problem, Date bornDate){
    _name = name;
    _patronomic = patronomic;
    _surname = surname;
    _problem = problem;
    _bornDate = bornDate;
};

Patient::Patient(string FIO, string problem, Date bornDate){
    string tempName = "";
    string names[3];
    int j = 0;
    for (int i = 0; i < FIO.length() ; i++){
        if (FIO[i] != ' '){
            tempName += FIO[i];
        }
        else {
            names[j] = tempName;
            j += 1;
            tempName = "";
        };

        if (i == FIO.length() - 1){
            names[2] = tempName;
        }
    };

    _surname = names[0];
    _name = names[1];
    _patronomic = names[2];
    _problem = problem;
    _bornDate = bornDate;
};


void Patient::PatientInfo(){
    cout<<"ФИО: "<<_surname<<" "<<_name<<" "<<_patronomic<<"\n";
    cout<<"Дата рождения: "<<_bornDate.day<<"."<<_bornDate.month<<"."<<_bornDate.year<<"\n";
    cout<<"Проблема: "<<_problem<<"\n";
    

};

string Patient::GetProblem(){
    return _problem;
}