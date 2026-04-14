#include <iostream>
#include <cmath>
using namespace std;

class Polar {
public:
    float r, angle;

    Polar(float a, float b) {
        r = a;
        angle = b;
    }
};

class Cartesian {
public:
    float x, y;

    Cartesian(Polar p) {   // conversion constructor
        x = p.r * cos(p.angle);
        y = p.r * sin(p.angle);
    }

    void show() {
        cout << "x: " << x << " y: " << y << endl;
    }
};

int main() {
    float r, a;
    cout << "Enter r and angle: ";
    cin >> r >> a;

    Polar p(r, a);
    Cartesian c = p;   // conversion

    c.show();

    return 0;
}