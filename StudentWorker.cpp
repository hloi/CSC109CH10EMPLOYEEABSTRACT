//
// Created by hloi on 4/4/2022.
//
#include <iostream>
#include "StudentWorker.h"

void StudentWorker::PrintInfo() {
    EmployeeStaff::PrintInfo();
    cout << "Student Id: " << studentid << endl;
}

const string &StudentWorker::getStudentid() const {
    return studentid;
}

void StudentWorker::setStudentid(const string &studentid) {
    this->studentid = studentid;
}

StudentWorker::StudentWorker(string name, string id) : EmployeeStaff(name) {
    this->studentid = id;
}
