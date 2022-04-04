//
// Created by hloi on 4/4/2022.
//


#include "EmployeeStaff.h"
#include <iostream>
#include <string>
using namespace std;

// Default constructor
EmployeeStaff::EmployeeStaff() {
    managerName = "";
}

// ***********************************************************************

// Constructor with parameters
EmployeeStaff::EmployeeStaff(string reportsTo) {
    managerName = reportsTo;
}

// ***********************************************************************

// Get the name of the manager

string EmployeeStaff::GetManagerName() {
    return managerName;
}

// ***********************************************************************

void EmployeeStaff::PrintInfo() {
    cout << "Name: " << fullName << ", Department: " << departmentCode
         << ", Birthday: " << birthday << ", Salary: " << annualSalary
         << ", Manager: " << GetManagerName() << endl;
}

// ***********************************************************************

// FIXME: Implement the GetAnnualBonus function. A staff's annual bonus
//        is calculated as 7.5% of the employee's annual salary.

int EmployeeStaff::GetAnnualBonus() {
    return 0;
}