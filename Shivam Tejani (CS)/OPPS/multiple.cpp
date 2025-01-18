#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int employee_id;
    string name;

    Employee(int id, string n){
		employee_id=id;
		name=n; 
	}
};

class Salary {
public:
    double basic_salary;
    double allowance;

    Salary(double bs, double a){
    	basic_salary=bs;
    	allowance=a;
	}
};

class EmployeeSalary : public Employee, public Salary {
public:
    EmployeeSalary(int id, string n, double bs, double a): Employee(id, n), Salary(bs, a) {}

    void print() {
        cout << "Employee ID: " << employee_id << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "Allowance: " << allowance << endl;
        cout << "Total Salary: " << basic_salary + allowance << endl;
    }
};

int main() {
    EmployeeSalary emp(1, "Rahul Chullu", 50000, 10000);
    emp.print();
    return 0;
}
