#include <iostream>
using namespace std;

class Speedometer {
public:
    int speed;
    void getSpeed() {
        cout << "Enter speed: ";
        cin >> speed;
    }
};

class FuelGauge {
public:
    int fuel;
    void getFuel() {
        cout << "Enter fuel level: ";
        cin >> fuel;
    }
};

class Thermometer {
public:
    int temp;
    void getTemp() {
        cout << "Enter temperature: ";
        cin >> temp;
    }
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    void show() {
        cout << "\nDashboard Info:\n";
        cout << "Speed: " << speed << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Temperature: " << temp << endl;
    }
};

int main() {
    CarDashboard c;
    c.getSpeed();
    c.getFuel();
    c.getTemp();
    c.show();
    return 0;
}