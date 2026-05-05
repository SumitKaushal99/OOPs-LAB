#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("letters.txt");

    file.seekg(-1, ios::end);

    char ch;
    file.get(ch);

    cout << "Last character: " << ch;

    file.close();
    return 0;
}