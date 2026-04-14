#include <iostream>
using namespace std;

class Test {
private:
    float x;

public:
    void get() {
        cout << "Enter value: ";
        cin >> x;
    }

    operator float() {   // conversion function
        return x;
    }
};

int main() {
    Test t;
    t.get();

    float a;
    a = t;   // conversion happens here

    cout << "Float value: " << a << endl;

    return 0;
}