#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor called\n";
    }

    ~Test() {   // Destructor
        cout << "Destructor called\n";
    }
};

int main() {
    int n;
    cout << "Enter number of objects: ";
    cin >> n;

    Test t[n];  // Destructor will run automatically

    return 0;
}
