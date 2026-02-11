#include <iostream>
using namespace std;

class Student {
    int roll;

public:
    void set(int roll) {
        this->roll = roll;   // this pointer
    }

    void show() {
        cout << "Roll = " << roll << endl;
    }
};

int main() {
    Student s;
    Student *p = &s;
    int r;

    cout << "Enter roll using dot operator: ";
    cin >> r;
    s.set(r);
    s.show();

    cout << "Enter roll using arrow operator: ";
    cin >> r;
    p->set(r);
    p->show();

    return 0;
}
