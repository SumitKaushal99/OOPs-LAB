#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // copy constructor
    Complex(const Complex &c) {
        real = c.real;
        imag = c.imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    friend void sum(Complex, Complex);
};

void sum(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    cout << "Sum = ";
    result.display();
}

int main() {
    Complex c1(2, 3), c2(4, 5);

    c1.display();
    c2.display();

    sum(c1, c2);

    return 0;
}