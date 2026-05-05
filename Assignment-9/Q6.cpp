#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("hello.txt", ios::out | ios::in);

    string text = "Hello World";

    // Write and show pointer
    for (int i = 0; i < text.length(); i++) {
        file.put(text[i]);
        cout << "Position after writing '" << text[i] << "' = " << file.tellp() << endl;
    }

    file.seekp(6); // position of 'W'
    file << "C++";

    file.close();

    cout << "\nModified content:\n";

    ifstream read("hello.txt");
    string output;
    getline(read, output);
    cout << output;

    read.close();
    return 0;
}