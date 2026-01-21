#include <iostream>
using namespace std;

class Test {
private:
    void showPrivate() {
        cout << "Private function called\n";
    }

public:
    void showPublic() {
        showPrivate();
    }
};

int main() {
    Test t;
    t.showPublic();
    return 0;
}
