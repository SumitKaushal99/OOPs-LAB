#include <iostream>
using namespace std;

class Base {
public:
    int a;
protected:
    int b;
private:
    int c;

public:
    void getData() {
        cout << "Enter a, b, c: ";
        cin >> a >> b >> c;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        // c not accessible
    }
};

int main() {
    Derived d;
    d.getData();
    d.show();

    return 0;
}