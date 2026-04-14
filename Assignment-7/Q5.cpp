#include <iostream>
using namespace std;

class Time {
public:
    int h, m, s;

    void get() {
        cout << "Enter h m s: ";
        cin >> h >> m >> s;
    }

    Time operator + (Time t) {
        Time temp;
        temp.s = s + t.s;
        temp.m = m + t.m;
        temp.h = h + t.h;
        return temp;
    }

    void show() {
        cout << h << ":" << m << ":" << s << endl;
    }
};

int main() {
    Time t1, t2, t3;

    t1.get();
    t2.get();

    t3 = t1 + t2;
    cout << "Sum: ";
    t3.show();

    return 0;
}