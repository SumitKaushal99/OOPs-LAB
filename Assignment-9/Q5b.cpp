#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("letters.txt", ios::in | ios::out);

    file.seekp(4); // 5th position
    file.put('X');

    file.close();
    cout << "5th character replaced.";
    return 0;
}