#include <iostream>
using namespace std;

class Vehicle {
public:
    string make, model;
    int year;

    void getVehicle() {
        cout << "Enter make: ";
        cin >> make;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter year: ";
        cin >> year;
    }
};

class Truck : public Vehicle {
public:
    int load;

    void getTruck() {
        cout << "Enter load capacity: ";
        cin >> load;
    }
};

class RefrigeratedTruck : public Truck {
public:
    int temp;

    void getRef() {
        cout << "Enter temperature control: ";
        cin >> temp;
    }

    void show() {
        cout << "\nTruck Info:\n";
        cout << make << " " << model << " " << year << endl;
        cout << "Load: " << load << endl;
        cout << "Temp control: " << temp << endl;
    }
};

int main() {
    RefrigeratedTruck r;
    r.getVehicle();
    r.getTruck();
    r.getRef();
    r.show();
    return 0;
}