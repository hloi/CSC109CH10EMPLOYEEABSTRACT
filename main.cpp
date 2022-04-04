#include <iostream>
#include "EmployeeManager.h"
#include "EmployeeStaff.h"
#include "StudentWorker.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    EmployeeManager* manager = new EmployeeManager(25);
    EmployeeStaff* staff1 = new EmployeeStaff("Michele");

    // Load data into the objects using the EmployeePerson class's functions
    manager->SetData("Michele", "Sales", "03-03-1975", 70000);
    staff1->SetData ("Bob",     "Sales", "02-02-1980", 50000);

    // Print the objects
//    manager->PrintInfo();
//    cout << "Annual bonus: " << manager.GetAnnualBonus() << endl;
//    staff1->PrintInfo();
//    cout << "Annual bonus: " << staff1.GetAnnualBonus() << endl;

    StudentWorker* student1 = new StudentWorker("Tom", "10000");

    // create two student objects
    vector<EmployeePerson*> employees;  // add manager, staff, students to the vector.
    employees.push_back(manager);
    employees.push_back(staff1);
    employees.push_back(student1);
    for (size_t i=0; i<employees.size(); i++) {
        employees.at(i)->PrintInfo();
    }
    // call the printInfo from the objects in the vector

    return 0;
}