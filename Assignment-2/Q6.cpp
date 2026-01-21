#include <iostream>
using namespace std;

int x = 50;   // global variable

class Demo {
public:
    void show();
};

// function defined outside class using scope resolution
void Demo::show() {
    cout << "Inside show function\n";
}

int main() {
    int x = 20;   // local variable

    Demo d;
    d.show();

    // accessing local variable
    cout << "Local x: " << x << endl;

    // accessing global variable using scope resolution
    cout << "Global x: " << ::x << endl;

    // using standard library with scope resolution
    std::cout << "Using std scope\n";

    return 0;
}
