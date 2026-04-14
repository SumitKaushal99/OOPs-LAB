#include <iostream>
using namespace std;

class Student {
public:
    string name;
    void get() {
        cout << "Enter name: ";
        cin >> name;
    }
    void show() {
        cout << name << endl;
    }
};

class Engineering : public Student {};
class Medicine : public Student {};
class Science : public Student {};

int main() {
    Student* s[3];

    Engineering e;
    Medicine m;
    Science sc;

    s[0] = &e;
    s[1] = &m;
    s[2] = &sc;

    for(int i=0;i<3;i++) {
        s[i]->get();
    }

    for(int i=0;i<3;i++) {
        s[i]->show();
    }

    return 0;
}