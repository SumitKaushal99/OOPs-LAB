#include <iostream>
using namespace std;

namespace one {
    int x = 10;
    void show() {
        cout << "From namespace one\n";
    }
}

namespace two {
    int x = 20;
    void show() {
        cout << "From namespace two\n";
    }
}

int main() {
    cout << one::x << endl;
    one::show();

    cout << two::x << endl;
    two::show();
    return 0;
}
