#include <iostream>
using namespace std;

class LibraryUser {
public:
    string name, id, contact;

    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter contact: ";
        cin >> contact;
    }
};

class Student : public LibraryUser {
public:
    string grade;

    void getStudent() {
        cout << "Enter grade: ";
        cin >> grade;
    }

    void showStudent() {
        cout << "\nStudent Info:\n";
        cout << name << " " << id << " " << contact << " Grade: " << grade << endl;
    }
};

class Teacher : public LibraryUser {
public:
    string dept;

    void getTeacher() {
        cout << "Enter department: ";
        cin >> dept;
    }

    void showTeacher() {
        cout << "\nTeacher Info:\n";
        cout << name << " " << id << " " << contact << " Dept: " << dept << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    cout << "\nEnter Student Details:\n";
    s.getData();
    s.getStudent();
    s.showStudent();

    cout << "\nEnter Teacher Details:\n";
    t.getData();
    t.getTeacher();
    t.showTeacher();

    return 0;
}