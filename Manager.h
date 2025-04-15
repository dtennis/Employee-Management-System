
#ifndef MANAGER_H
#define MANAGER_H


#include "Employee.h"

class Manager : public Employee {
private:
    double baseSalary;
    int teamSize;

public:
    Manager (string m_name, int m_id, double m_salary, int m_size);
    void display();
    double calculateSalary() ;
};

#endif //MANAGER_H