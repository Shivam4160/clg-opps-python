#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;
    string course;

public:
    Student(string n, int a, int roll, string c) : Person(n, a) {
        rollNumber = roll;
        course = c;
    }

    void displayStudentDetails() {
        displayPersonDetails();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student student1("John Doe", 20, 101, "Computer Science");

    student1.displayStudentDetails();

    return 0;
}