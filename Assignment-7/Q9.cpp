#include <iostream>
using namespace std;

class Test {
public:
    void operator()(int a) {
        cout << "One value: " << a << endl;
    }

    void operator()(int a, int b) {
        cout << "Two values: " << a << " " << b << endl;
    }

    void operator()(int a, int b, int c) {
        cout << "Three values: " << a << " " << b << " " << c << endl;
    }
};

int main() {
    Test t;

    t(5);
    t(5,10);
    t(5,10,15);

    return 0;
}