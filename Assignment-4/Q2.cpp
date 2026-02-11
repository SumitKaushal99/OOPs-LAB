#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    Rectangle(int l = 0, int b = 0) {
        length = l;
        breadth = b;
        cout << "Constructor called\n";
    }

    int area() {
        return length * breadth;
    }

    ~Rectangle() {
        cout << "Destructor called\n";
    }
};

int main() {
    int n;
    cout << "Enter number of rectangles: ";
    cin >> n;

    Rectangle r[n];

    for(int i = 0; i < n; i++) {
        int l, b;
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        r[i] = Rectangle(l, b);
    }

    for(int i = 0; i < n; i++) {
        cout << "Area: " << r[i].area() << endl;
    }

    return 0;
}
