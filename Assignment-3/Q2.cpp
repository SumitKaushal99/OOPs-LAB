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
    void show() { cout << "A = " << x << endl; }
    friend void swap(A &, B &);
};

class B {
    int y;
public:
    void set() {
        cout << "Enter value for B: ";
        cin >> y;
    }
    void show() { cout << "B = " << y << endl; }
    friend void swap(A &, B &);
};

void swap(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main() {
    A a;
    B b;

    a.set();
    b.set();

    swap(a, b);

    cout << "After Swapping:\n";
    a.show();
    b.show();

    return 0;
}