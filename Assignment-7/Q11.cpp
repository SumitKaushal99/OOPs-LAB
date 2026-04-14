#include <iostream>
using namespace std;

class Test {
private:
    float x;

public:
    Test(float a) {   // constructor for conversion
        x = a;
    }

    void show() {
        cout << "Value in object: " << x << endl;
    }
};

int main() {
    float a;
    cout << "Enter float value: ";
    cin >> a;

    Test t = a;   // conversion happens here
    t.show();

    return 0;
}