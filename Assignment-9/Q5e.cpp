#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");
    file << "This is a sample file with multiple lines.\nSecond line here.\nThird line.";
    file.close();

    ifstream read("data.txt");

    read.seekg(10);
    cout << "Pointer at: " << read.tellg() << endl;

    char ch;
    cout << "Remaining content:\n";
    while (read.get(ch)) {
        cout << ch;
    }

    read.close();
    return 0;
}