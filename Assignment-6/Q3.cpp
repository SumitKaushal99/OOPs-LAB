#include <iostream>
using namespace std;

class Account {
    const long accountNo;
    long transactionID;
    double balance;

public:
    Account(long acc, double bal) : accountNo(acc), balance(bal) {
        transactionID = 1000;
    }

    long depositAmount(const long &to, const long &from, const double &amount) {
        if (accountNo == to) {
            balance += amount;
            return transactionID++;
        }
        return -1;
    }

    long creditAmount(const long &to, const long &from, const double &amount) {
        if (accountNo == from) {
            balance -= amount;
            return transactionID++;
        }
        return -1;
    }

    void displayDetails() const {
        cout << "Account: " << accountNo
             << " Balance: " << balance << endl;
    }
};

int main() {
    Account a1(101, 5000);
    Account a2(102, 3000);

    long id;

    id = a1.depositAmount(101, 102, 1000);
    cout << "Deposit ID: " << id << endl;

    id = a2.creditAmount(101, 102, 500);
    cout << "Credit ID: " << id << endl;

    a1.displayDetails();
    a2.displayDetails();

    return 0;
}