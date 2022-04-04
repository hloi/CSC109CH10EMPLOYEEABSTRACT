//
// Created by hloi on 4/4/2022.
//

#ifndef CSC109CH10EMPLOYEEABSTRACT_STUDENTWORKER_H
#define CSC109CH10EMPLOYEEABSTRACT_STUDENTWORKER_H

#include "EmployeeStaff.h"

class StudentWorker : public EmployeeStaff {
private:
    string studentid;
public:
    StudentWorker() {}
    StudentWorker(string name, string id);
    const string &getStudentid() const;

    void setStudentid(const string &studentid);

private:
    // implement the abstract functions from the inheritance
    void PrintInfo();
};


#endif //CSC109CH10EMPLOYEEABSTRACT_STUDENTWORKER_H
