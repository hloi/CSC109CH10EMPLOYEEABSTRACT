//
// Created by hloi on 4/4/2022.
//

#ifndef CSC109CH10EMPLOYEEABSTRACT_EMPLOYEEPERSON_H
#define CSC109CH10EMPLOYEEABSTRACT_EMPLOYEEPERSON_H


#include <iostream>
#include <string>

using std::string;

class EmployeePerson {
public:
    EmployeePerson();
    EmployeePerson(string empFullName, string empDepartmentCode,
                   string empBirthday, int empAnnualSalary);
    void SetData(string empFullName, string empDepartmentCode,
                 string empBirthday, int empAnnualSalary);
    virtual void PrintInfo() = 0;
    virtual int GetAnnualBonus() = 0;

protected:
    string fullName;         // In the format last name, first name
    string departmentCode;
    string birthday;
    int annualSalary;
};


#endif //CSC109CH10EMPLOYEEABSTRACT_EMPLOYEEPERSON_H
