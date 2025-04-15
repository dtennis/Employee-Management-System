
#ifndef DEVELOPER_H
#define DEVELOPER_H


#include "Employee.h"

class Developer : public Employee {
private:
    double baseSalary;
    string programLang;

public:
    Developer(string m_name, int m_id, double m_salary, string m_lang);
    void display() ;
    double calculateSalary() ;
};

#endif //DEVELOPER_H