#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    A(int val) { x = val; }

    friend void add(A, B);
};

class B {
    int y;
public:
    B(int val) { y = val; }

    friend void add(A, B);
};

void add(A a, B b) {
    cout << "Sum = " << a.x + b.y;
}

int main() {
    A a(5);
    B b(10);

    add(a, b);

    return 0;
}