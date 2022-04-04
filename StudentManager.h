//
// Created by hloi on 4/4/2022.
//

#ifndef CSC109CH10EMPLOYEEABSTRACT_STUDENTMANAGER_H
#define CSC109CH10EMPLOYEEABSTRACT_STUDENTMANAGER_H
#include "EmployeeStaff.h"
#include "EmployeeManager.h"

class StudentManager : public EmployeeManager, public EmployeeStaff {

public:
    void PrintInfo() override;


};


#endif //CSC109CH10EMPLOYEEABSTRACT_STUDENTMANAGER_H
