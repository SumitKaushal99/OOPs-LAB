#include <iostream>
using namespace std;

template <typename T>
class Pair {
    T a, b;

public:
    void input() {
        cout << "Enter two values: ";
        cin >> a >> b;
    }

    void display() {
        cout << "Values: " << a << " " << b;
    }
};

int main() {
    Pair<int> p;
    p.input();
    p.display();
    return 0;
}