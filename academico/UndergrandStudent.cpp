#include "UndergrandStudent.h"
using namespace std;


UndergrandStudent::UndergrandStudent(NameType name, DocType doctype, string document, 
                                    ProfessionType profession, CycleType cycle, CoursesType courses)
    : Person(name, doctype, document)
{
        setCycle(cycle);
        setProfession(profession); 
        setCourses(courses);
        cout<<"Constructor UndergrandStudent :\n"<< toString()<<endl;   

}

UndergrandStudent::~UndergrandStudent()
{
    cout<<"Llamando destructor.";
} 

