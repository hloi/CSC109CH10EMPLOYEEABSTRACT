//
// Created by hloi on 4/4/2022.
//

#include "EmployeeManager.h"
#include <iostream>
#include <string>
using namespace std;

// Default constructor
EmployeeManager::EmployeeManager() {
    numManaged = 0;
}

// ***********************************************************************

// Constructor with parameters
EmployeeManager::EmployeeManager(int nManaged) {
    numManaged = nManaged;
}

// ***********************************************************************

// Get the number of people managed
int EmployeeManager::GetNumManaged() {
    return numManaged;
}

// ***********************************************************************

void EmployeeManager::PrintInfo() {
    cout << "Name: " << fullName << ", Department: " << departmentCode
         << ", Birthday: " << birthday << ", Salary: " << annualSalary
         << ", Staff managed: " << GetNumManaged() << endl;
}

// ***********************************************************************

// FIXME: Implement the GetAnnualBonus function. A manager's annual bonus
//        is calculated as 10% of the manager's annual salary.
int EmployeeManager::GetAnnualBonus() {
    return 0;
}