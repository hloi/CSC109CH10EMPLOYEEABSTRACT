//
// Created by hloi on 4/4/2022.
//

#ifndef CSC109CH10EMPLOYEEABSTRACT_EMPLOYEEMANAGER_H
#define CSC109CH10EMPLOYEEABSTRACT_EMPLOYEEMANAGER_H


#include "EmployeePerson.h"
#include <iostream>
#include <string>
using namespace std;

class EmployeeManager : public EmployeePerson {
public:
    EmployeeManager();
    EmployeeManager(int nManaged);
    int GetNumManaged();
    void PrintInfo();
    int GetAnnualBonus();

private:
    int numManaged;
};


#endif //CSC109CH10EMPLOYEEABSTRACT_EMPLOYEEMANAGER_H
