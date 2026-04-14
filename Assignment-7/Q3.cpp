#include <iostream>
using namespace std;

class Triangle {
public:
    void area(int a, int b) {
        cout << "Right angle triangle area: " << (a * b) / 2 << endl;
    }

    void area(int a) {
        cout << "Equilateral triangle area: " << (1.732 * a * a) / 4 << endl;
    }

    void area(int a, int b, int c) {
        cout << "Isosceles triangle sides: " << a << " " << b << " " << c << endl;
    }
};

int main() {
    Triangle t;

    int a, b, c;
    cout << "Enter two sides: ";
    cin >> a >> b;
    t.area(a, b);

    cout << "Enter side for equilateral: ";
    cin >> a;
    t.area(a);

    cout << "Enter three sides: ";
    cin >> a >> b >> c;
    t.area(a, b, c);

    return 0;
}