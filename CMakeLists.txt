cmake_minimum_required(VERSION 3.21)
project(CSC109CH10EMPLOYEEABSTRACT)

set(CMAKE_CXX_STANDARD 14)

add_executable(CSC109CH10EMPLOYEEABSTRACT main.cpp EmployeePerson.cpp EmployeePerson.h EmployeeManager.cpp EmployeeManager.h EmployeeStaff.cpp EmployeeStaff.h StudentWorker.cpp StudentWorker.h StudentManager.cpp StudentManager.h)
