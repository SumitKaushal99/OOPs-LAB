#include <iostream>
using namespace std;

class Polygon {
public:
    int width, height;

    void set_value(int w, int h) {
        width = w;
        height = h;
    }

    virtual int area() {
        return 0;
    }
};

class Rectangle : public Polygon {
public:
    int area() {
        return width * height;
    }
};

class Triangle : public Polygon {
public:
    int area() {
        return (width * height) / 2;
    }
};

int main() {
    Polygon *p;
    Rectangle r;
    Triangle t;

    int w, h;
    cout << "Enter width and height: ";
    cin >> w >> h;

    p = &r;
    p->set_value(w, h);
    cout << "Rectangle area: " << p->area() << endl;

    p = &t;
    p->set_value(w, h);
    cout << "Triangle area: " << p->area() << endl;

    return 0;
}
