#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;

public:
    Animal(string n) {
        name = n;
    }

    void eat() {
        cout << name << " is eating." << endl;
    }
};

class Mammal : public Animal {
public:
    Mammal(string n) : Animal(n) {}

    void walk() {
        cout << name << " is walking." << endl;
    }
};

class Dog : public Mammal {
public:
    Dog(string n) : Mammal(n) {}

    void bark() {
        cout << name << " says Woof!" << endl;
    }
};

int main() {
    Dog myDog("Buddy");

    myDog.eat();
    myDog.walk();
    myDog.bark();

    return 0;
}