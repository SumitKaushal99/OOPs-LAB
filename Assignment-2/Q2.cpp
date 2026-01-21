#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float cgpa;

    void updateCGPA() {
        cgpa = 8.5;
    }

public:
    string name;

    void addDetails() {
        cout << "Enter name: ";
        cin >> name;
        roll = 10;
        cgpa = 7.8;
        updateCGPA();
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s;
    s.addDetails();
    s.display();
    return 0;
}
