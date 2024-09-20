#include <Doctor.h>
#include "PatientQueue.h"

int main(){
    Doctor doc;
    PatientQueue queue;
    while (true){
        queue.AddPatient(new Patient(...));
    };
    while (true){
        doc.TakePatient(queue.GetNext());
    };
};