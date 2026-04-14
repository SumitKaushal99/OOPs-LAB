#include <iostream>
using namespace std;

class Test {
public:
    int x;

    // input operator
    friend istream& operator>>(istream &in, Test &t) {
        cout << "Enter value: ";
        in >> t.x;
        return in;
    }

    // output operator
    friend ostream& operator<<(ostream &out, Test &t) {
        out << "Value is: " << t.x << endl;
        return out;
    }
};

int main() {
    Test t;

    cin >> t;
    cout << t;

    return 0;
}