#include <iostream>
using namespace std;

class A;

class B {
public:
    void show(A &);
};

class A {
    int x;
public:
    void set() {
        cout << "Enter value: ";
        cin >> x;
    }
    friend class B;
};

void B::show(A &a) {
    cout << "Value accessed using friend class = " << a.x;
}

int main() {
    A a;
    B b;

    a.set();
    b.show(a);

    return 0;
}
