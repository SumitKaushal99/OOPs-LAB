//Q10 (Lab 1)
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout <<"By if-else"<<endl;
    if (n % 2 == 0)
        cout << "Even \n";
    else
        cout << "Odd \n";
    cout <<"By conditional"<<endl;
    cout << ((n % 2 == 0) ? "Even " : "Odd ");
    return 0;
}