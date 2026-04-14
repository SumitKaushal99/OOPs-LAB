#include <iostream>
using namespace std;

// Base class
class A {
public:
    int x;
    void getX() {
        cout << "Enter x: ";
        cin >> x;
    }
};

// Single Inheritance 
class B : public A {
public:
    void showB() {
        cout << "Single Inheritance x: " << x << endl;
    }
};

// Multilevel Inheritance 
class C : public B {
public:
    void showC() {
        cout << "Multilevel Inheritance x: " << x << endl;
    }
};

// Multiple Inheritance 
class D {
public:
    int y;
    void getY() {
        cout << "Enter y: ";
        cin >> y;
    }
};

class E : public A, public D {
public:
    void showE() {
        cout << "Multiple Inheritance x: " << x << ", y: " << y << endl;
    }
};

// Hierarchical Inheritance
class F : public A {
public:
    void showF() {
        cout << "Hierarchical Inheritance (F) x: " << x << endl;
    }
};

class G : public A {
public:
    void showG() {
        cout << "Hierarchical Inheritance (G) x: " << x << endl;
    }
};

// Hybrid Inheritance
class H : public B, public D {
public:
    void showH() {
        cout << "Hybrid Inheritance x: " << B::x << ", y: " << y << endl;
    }
};

int main() {

    // Single
    B b;
    b.getX();
    b.showB();

    // Multilevel
    C c;
    c.getX();
    c.showC();

    // Multiple
    E e;
    e.A::getX();
    e.getY();
    e.showE();

    // Hierarchical
    F f;
    f.getX();
    f.showF();

    G g;
    g.getX();
    g.showG();

    // Hybrid
    H h;
    h.B::getX();
    h.getY();
    h.showH();

    return 0;
}