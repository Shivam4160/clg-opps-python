#include <iostream>
using namespace std;

class Number {
protected:
    int num;

public:
    Number(int n) {
		num=n;
	}
};

class Square : public Number {
public:
    Square(int n) : Number(n) {}

    int calculateSquare() {
        return num * num;
    }
};

class Cube : public Number {
public:
    Cube(int n) : Number(n) {}

    int calculateCube() {
        return num * num * num;
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    Square square(number);
    Cube cube(number);

    cout << "Square of " << number << " is: " << square.calculateSquare() << endl;
    cout << "Cube of " << number << " is: " << cube.calculateCube() << endl;

    return 0;
}
