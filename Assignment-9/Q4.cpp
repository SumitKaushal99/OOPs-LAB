#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "Length = " << text.length() << endl;

    ofstream file("data.txt");
    file << text;
    file.close();

    ifstream readFile("data.txt");
    string output;

    getline(readFile, output);
    cout << "From file: " << output;

    readFile.close();
    return 0;
}