#include <iostream>
using namespace std;

class Array {
public:
    int a[5];

    void get() {
        cout << "Enter 5 elements: ";
        for(int i=0;i<5;i++)
            cin >> a[i];
    }

    int operator[](int i) {
        if(i < 0 || i >= 5) {
            cout << "Out of bounds\n";
            return -1;
        }
        return a[i];
    }
};

int main() {
    Array arr;
    arr.get();

    int index;
    cout << "Enter index: ";
    cin >> index;

    cout << "Value: " << arr[index] << endl;

    return 0;
}