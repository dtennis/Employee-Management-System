
#include "Developer.h"

Developer::Developer(string m_name, int m_id, double m_salary, string m_lang) : Employee(m_name, m_id), baseSalary(m_salary), programLang(m_lang) {

}

void Developer::display() {
    Employee::display();
    cout << "Role: Developer, Language: " << programLang << endl;
}

double Developer::calculateSalary() {
    return baseSalary + 500;
}
