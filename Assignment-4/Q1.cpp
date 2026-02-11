#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    // No parameter 
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    // One parameter 
    Rectangle(int n) {
        length = n;
        breadth = n;
    }

    // Two parameter 
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    int n, l, b;

    cout << "Enter one value for square: ";
    cin >> n;

    cout << "Enter length and breadth: ";
    cin >> l >> b;

    Rectangle r1;        
    Rectangle r2(n);     
    Rectangle r3(l, b);  

    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Area of r3: " << r3.area() << endl;

    return 0;
}
