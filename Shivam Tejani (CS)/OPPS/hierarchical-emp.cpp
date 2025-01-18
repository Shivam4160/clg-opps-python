// PF = provident fund (Allowance)
#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int employee_id;
    string name;

public:
    Employee(int id, string n) {
        employee_id = id;
        name = n;
    }

    void displayEmployee() {
        cout << "Employee ID: " << employee_id << endl;
        cout << "Name: " << name << endl;
    }
};

class Department : public Employee {
private:
    string department_name;

public:
    Department(int id, string n, string dn) : Employee(id, n){
		department_name=dn;
	}

    void displayDepartment() {
        displayEmployee();
        cout << "Department: " << department_name << endl;
    }
};

class PF : public Employee {
private:
    double pf_amount;

public:
    PF(int id, string n, double pfa) 
        : Employee(id, n), pf_amount(pfa) {}

    void displayPF() {
        displayEmployee();
        cout << "PF Amount: " << pf_amount << endl;
    }
};

int main() {
    int employee_id;
    string name;
    string department_name;
    double pf_amount;

    cout << "Enter Employee ID: ";
    cin >> employee_id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Department Name: ";
    getline(cin, department_name);
    cout << "Enter PF Amount: ";
    cin >> pf_amount;

    Department department(employee_id, name, department_name);
    PF pf(employee_id, name, pf_amount);

    cout << "\nEmployee Department Information:" << endl;
    department.displayDepartment();

    cout << "\n\nEmployee PF Information:" << endl;
    pf.displayPF();

    return 0;
}
