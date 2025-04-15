#include <iostream>
#include <vector>
#include "Developer.h"
#include "Manager.h"

int main() {
    vector<Employee*> company;

    company.push_back(new Developer("Alice", 101, 4000, "C++"));
    company.push_back(new Manager("Bob", 102, 5000, 5));

    for (Employee* emp : company) {
        emp->display();
        cout << "Calculated Salary: $" << emp->calculateSalary() << endl;
        printEmployeeID(*emp);
        cout << "-----------------------" << endl;
    }

    if (*company[0] == *company[1]) {
        cout << "Same Employee ID" << endl;
    } else {
        cout << "Different Employee IDs" << endl;
    }

    cout << "-----------------------" << endl;

    for (Employee* emp : company) {
        delete emp;
        cout << "Employee " << emp->m_id << " has left the company" << endl;
    }

    return 0;
}
