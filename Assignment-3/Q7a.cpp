#include <iostream>
using namespace std;

class Test {
public:
    int x;
};

Test change(Test t) {
    t.x = t.x + 10;
    return t;
}

int main() {
    Test t1, t2;

    cout << "Enter value: ";
    cin >> t1.x;

    t2 = change(t1);

    cout << "Returned value = " << t2.x;

    return 0;
}
