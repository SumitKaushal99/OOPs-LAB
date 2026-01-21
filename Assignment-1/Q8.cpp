//Q8 (Lab 1)
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout <<"Input No. of days of Late Submission: ";
    cin >> a;
    if (a <= 5) {
        cout << "Fine is 0.5 rupees";
    }
    else if (a <= 10) {
        cout << "Fine is 1 rupee";
    }
    else if (a <= 30) {
        cout << "Fine is 5 rupees";
    }
    else {
        cout << "Membership Canceled!!";
    }

    return 0;

}