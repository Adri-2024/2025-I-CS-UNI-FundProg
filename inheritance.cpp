#include <iostream>
#include "inheritance.h"
#include "academico/professor.h"
#include "academico/UndergrandStudent.h"
using namespace std;
 
void DemoInheritance(){
    cout << "DemoInheritance" << endl;

    Professor p1 ("Ernesto", DocTypeDNI, "12345678", 100);
    UndergrandStudent p2 ("Alfonso", DocTypeDNI, "123456789", "Computer Science",5,"Fundamentos de la programacion, Algebra, Fisica ");
        
}