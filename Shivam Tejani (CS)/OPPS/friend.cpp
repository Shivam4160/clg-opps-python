#include <iostream>
#include <string>
using namespace std;


class Student {
    private:
        string name;
        int rollNumber;
        float cgpa;

    public:
        Student(string n, int r, float c) {
            name = n;
            rollNumber = r;
            cgpa = c;
        }

        friend void displayStudentInfo(Student student);
};

void displayStudentInfo(Student student) {
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "CGPA: " << student.cgpa << endl;
}

int main() {
    Student student1("rahul munna", 191, 8.5);
    displayStudentInfo(student1);

    return 0;
}
