#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    string degree;
    string hostel;
    float cgpa;

    void addDetails() {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter roll no: ";
        cin >> roll;
        cin.ignore();  

        cout << "Enter degree: ";
        getline(cin, degree);

        cout << "Enter hostel: ";
        getline(cin, hostel);

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> cgpa;
    }

    void displayDetails() {
        cout << "\nName: " << name;
        cout << "\nRoll: " << roll;
        cout << "\nDegree: " << degree;
        cout << "\nHostel: " << hostel;
        cout << "\nCGPA: " << cgpa << endl;
    }
};

int main() {
    Student s;
    s.addDetails();
    s.updateCGPA();
    s.displayDetails();
    return 0;
}
