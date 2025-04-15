
#include "Employee.h"

Employee::Employee(string name, int id) : m_name(name), m_id(id) {

}

void Employee::display() {
    cout << "Employee Name: " << m_name << ", ID: " << m_id << endl;
}

bool Employee::operator==(const Employee& other) {
    return m_id == other.m_id;
}

void printEmployeeID(const Employee& emp) {
    cout << "Employee ID: " << emp.m_id << endl;
}
