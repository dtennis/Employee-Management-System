
#include "Manager.h"

Manager::Manager(string m_name, int m_id, double m_salary, int m_size) : Employee(m_name, m_id), baseSalary(m_salary), teamSize(m_size) {

}

void Manager::display() {
    Employee::display();
    cout << "Role: Manager, Team Size: " << teamSize << endl;
}

double Manager::calculateSalary() {
    return baseSalary + 100 * teamSize;
}

