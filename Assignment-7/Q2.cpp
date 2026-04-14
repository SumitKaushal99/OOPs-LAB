#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {}
    virtual void display() {}
};

class Circle : public Shape {
public:
    int r;
    void area() {
        cout << "Enter radius: ";
        cin >> r;
        cout << "Area of circle: " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
public:
    int l, b;
    void area() {
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        cout << "Area of rectangle: " << l * b << endl;
    }
};

class Triangle : public Shape {
public:
    int h, b;
    void area() {
        cout << "Enter base and height: ";
        cin >> b >> h;
        cout << "Area of triangle: " << 0.5 * b * h << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;
    Triangle t;

    c.area();
    r.area();
    t.area();

    return 0;
}