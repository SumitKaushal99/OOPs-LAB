#include <iostream>
using namespace std;

class Base {
public:
    int x;

    void getData() {
        cout << "Enter value of x: ";
        cin >> x;
    }

    void showData() {
        cout << "Value of x: " << x << endl;
    }
};

class Derived : public Base {
public:
    int y;

    void getY() {
        cout << "Enter value of y: ";
        cin >> y;
    }

    void showY() {
        cout << "Value of y: " << y << endl;
    }
};

int main() {
    Base b;
    Derived d;

    cout << "Base Object:\n";
    b.getData();
    b.showData();

    cout << "\nDerived Object:\n";
    d.getData();
    d.getY();
    d.showData();
    d.showY();

    return 0;
}
