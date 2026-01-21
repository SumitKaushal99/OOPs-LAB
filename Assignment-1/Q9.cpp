//Q9 (Lab 1)
#include <iostream>
using namespace std;
int main() {
    float a,b;
    int x;
    cout << "Enter First number: ";
    cin >> a;
    cout << "Enter Second number: ";
    cin >> b;
    cout << "1.Add 2.Subtract 3.Multiply 4.Divide\n";
    cout << "Enter choice: ";
    cin >> x;
    switch(x){
        case 1:cout<<a+b;break;
        case 2:cout<<a-b;break;
        case 3:cout<<a*b;break;
        case 4:cout<<a/b;break;
        default:cout<<"Invalid Output";
        
    }
    
    return 0;

}