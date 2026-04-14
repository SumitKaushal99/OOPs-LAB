#include <iostream>
using namespace std;

class Person {
public:
    string name, address;

    void getPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
    }
};

class Staff : public Person {
public:
    int empId;
    string dept;

    void getStaff() {
        cout << "Enter employee ID: ";
        cin >> empId;
        cout << "Enter department: ";
        cin >> dept;
    }
};

class Student : public Person {
public:
    int stuId;
    string grade;

    void getStudent() {
        cout << "Enter student ID: ";
        cin >> stuId;
        cout << "Enter grade: ";
        cin >> grade;
    }
};

class TeachingAssistant : public Staff, public Student {
public:
    void show() {
        cout << "\nTeaching Assistant Info:\n";
        cout << "Name: " << Staff::name << endl;
        cout << "Address: " << Staff::address << endl;
        cout << "EmpID: " << empId << " Dept: " << dept << endl;
        cout << "StuID: " << stuId << " Grade: " << grade << endl;
    }
};

int main() {
    TeachingAssistant t;

    t.Staff::getPerson();
    t.getStaff();
    t.getStudent();
    t.show();

    return 0;
}