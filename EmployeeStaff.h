//
// Created by hloi on 4/4/2022.
//

#ifndef CSC109CH10EMPLOYEEABSTRACT_EMPLOYEESTAFF_H
#define CSC109CH10EMPLOYEEABSTRACT_EMPLOYEESTAFF_H


#include "EmployeePerson.h"
#include <iostream>
#include <string>
using namespace std;

class EmployeeStaff : public EmployeePerson {
public:
    EmployeeStaff();
    EmployeeStaff(string reportsTo);
    string GetManagerName();
    void PrintInfo();
    int GetAnnualBonus();
private:
    string managerName;
};


#endif //CSC109CH10EMPLOYEEABSTRACT_EMPLOYEESTAFF_H
