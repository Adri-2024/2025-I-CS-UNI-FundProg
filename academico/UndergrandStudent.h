#ifndef __UNDERGRANSTUDENT_H__
#define __UNDERGRANSTUDENT_H__
#include "person.h"
#include <sstream>


class UndergrandStudent : public Person{
    private :  
       ProfessionType m_profession;
       CycleType      m_cycle;
       CoursesType    m_courses;

    public :
       UndergrandStudent(NameType name, DocType doctype, string document, ProfessionType profession, CycleType cycle, CoursesType courses);
       virtual ~UndergrandStudent();

       void setProfession(ProfessionType profession){m_profession = profession;}
       void setCycle     (CycleType   cycle  )      {m_cycle   = cycle;}
       void setCourses   (CoursesType courses)      {m_courses = courses;}

       ProfessionType getProfession(){return m_profession;}
       CycleType      getCycle()     {return m_cycle;}
       CoursesType    getCourses()   {return m_courses;}

       string toString(){
       ostringstream ostr;
       ostr << Person::toString() 
            << " Profession is : "    << getProfession() << endl
            << " Cycle relative is : "<< getCycle()  << endl
            << " Courses is: "        << getCourses()<<endl;
        return ostr.str(); 
    };




};


#endif //__UNDERGRANSTUDENT_H__