#include "Doctor.h"
int main(){
    // Doctor doc;
    // PatientQueue queue;
    // while (true){
    //     queue.AddPatient(new Patient(...));
    // };
    // while (true){
    //     doc.TakePatient(queue.GetNext());
    //     auto p = queue.GetNext();
    // };
    Date bornDate;
    bornDate.day = 2;
    bornDate.month = 3;
    bornDate.year = 2005; 
    Patient a("Кондаков Владислав Сергеевич", "хуй", bornDate);
    a.PatientInfo();

    Doctor d;
    d.PrintProblem(&a);
};