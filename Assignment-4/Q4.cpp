#include <iostream>
using namespace std;

class Demo {
public:
    int x;
};

int main() {

    // Integer
    int *p = new int;
    cout << "Enter integer value: ";
    cin >> *p;
    cout << "Value = " << *p << endl;
    delete p;

    // Float
    float *f = new float;
    cout << "Enter float value: ";
    cin >> *f;
    cout << "Value = " << *f << endl;
    delete f;

    // Integer Array
    int n;
    cout << "Enter size of integer array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array elements: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    delete[] arr;

    // Class object
    Demo *obj = new Demo;
    cout << "\nEnter value for class object: ";
    cin >> obj->x;
    cout << "Object value: " << obj->x << endl;
    delete obj;

    return 0;
}
