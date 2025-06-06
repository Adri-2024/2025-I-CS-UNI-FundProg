#ifndef __TYPES_H__
#define __TYPES_H__
#include <string>

using namespace std;
using NameType = string;
enum DocType {
    DocTypeNone,
    DocTypeDNI, 
    DocTypePassport
};

using SalaryType = double;

using ProfessionType = string;
using CycleType    =   int;
using CoursesType  =   string;

using ContainerElemType = int;

#endif // __TYPES_H__