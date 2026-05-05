#include <iostream>
using namespace std;

// Single parameter
template <typename T>
void show(T a) {
    cout << "One value: " << a << endl;
}

// Two same type
template <typename T>
void show(T a, T b) {
    cout << "Two same type values: " << a << " " << b << endl;
}

// Two different types
template <typename T, typename U>
void show(T a, U b) {
    cout << "Different types: " << a << " and " << b << endl;
}

int main() {
    show(5);
    show(3, 7);
    show(10, 5.5);

    return 0;
}