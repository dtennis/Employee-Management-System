
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

// Abstract Class
class Employee {
protected:
    string m_name;


public:
    int m_id;
    Employee(string name, int id);
    virtual ~Employee() {}

    virtual void display();
    virtual double calculateSalary() = 0;

    bool operator==(const Employee& other);
    friend void printEmployeeID(const Employee& emp);
};


#endif //EMPLOYEE_H