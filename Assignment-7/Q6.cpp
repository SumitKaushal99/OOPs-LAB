#include <iostream>
using namespace std;

class String {
public:
    string str;

    void get() {
        cout << "Enter string: ";
        cin >> str;
    }

    bool operator == (String s) {
        return str == s.str;
    }

    String operator + (String s) {
        String temp;
        temp.str = str + s.str;
        return temp;
    }

    void show() {
        cout << str << endl;
    }
};

int main() {
    String s1, s2, s3;

    s1.get();
    s2.get();

    if(s1 == s2)
        cout << "Strings are equal\n";
    else
        cout << "Not equal\n";

    s3 = s1 + s2;
    cout << "Concatenated: ";
    s3.show();

    return 0;
}