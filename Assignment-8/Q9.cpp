#include <iostream>
using namespace std;

template <typename T>
class Calculator {
    T a, b;

public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void operations() {
        cout << "Addition: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Multiplication: " << a * b << endl;
        cout << "Division: " << a / b << endl;
    }
};

int main() {
    Calculator<float> c;
    c.input();
    c.operations();
    return 0;
}