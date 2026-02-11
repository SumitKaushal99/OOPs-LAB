#include <iostream>
using namespace std;

class Rectangle {
    int l, b;
public:
    void get() {
        cout << "Enter length and breadth: ";
        cin >> l >> b;
    }
    void area() {
        cout << "Area = " << l * b << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of rectangles: ";
    cin >> n;

    Rectangle r[n];

    for(int i = 0; i < n; i++)
        r[i].get();

    for(int i = 0; i < n; i++)
        r[i].area();

    return 0;
}
