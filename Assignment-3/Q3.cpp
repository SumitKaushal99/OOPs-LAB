#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    void set() {
        cout << "Enter value for A: ";
        cin >> x;
    }
    friend int add(A, B);
};

class B {
    int y;
public:
    void set() {
        cout << "Enter value for B: ";
        cin >> y;
    }
    friend int add(A, B);
};

int add(A a, B b) {
    return a.x + b.y;
}

int main() {
    A a;
    B b;

    a.set();
    b.set();

    cout << "Sum = " << add(a, b);

    return 0;
}