#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("file1.txt");
    ofstream dest("file2.txt");

    char ch;
    while (source.get(ch)) {
        dest.put(ch);
    }

    source.close();
    dest.close();

    cout << "File copied successfully.";
    return 0;
}