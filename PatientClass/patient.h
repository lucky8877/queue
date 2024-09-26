#pragma once
#include <iostream>
#include <string>

using namespace std;
struct Diag {
    string desis;
    string pills;
};
struct Date {
    int day;
    int month;
    int year;
};

class Patient {
    private:
        string _name;
        string _surname;
        string _patronomic;
        string _problem;
        //uuID uuid;
        Date _bornDate;
        Diag _diag;
    public:
        Patient(string name, string patronomic, string surname, string problem, Date bornDate);
        Patient(string FIO, string problem, Date bornDate);
        void PatientInfo();
        string GetProblem();
};

