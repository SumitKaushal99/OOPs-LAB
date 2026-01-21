//Q7 (Lab 1)
#include <iostream>
using namespace std;
int main() {
    int x = 10; 
    int y = 15;
    cout << "Before swap: x = "<< x << ", y = "<< y << endl;
    x = x ^ y; 
    y = x ^ y;  
    x = x ^ y;  
    cout << "After swap: x = "<< x << ", y = "<< y << endl;
    return 0;

}