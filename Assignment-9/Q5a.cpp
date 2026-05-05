#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("letters.txt");
    for (char ch = 'A'; ch <= 'Z'; ch++)
        file << ch;

    file.close();

    ifstream read("letters.txt");
    read.seekg(9);  // 10th character

    char ch;
    read.get(ch);
    cout << "10th character: " << ch;

    read.close();
    return 0;
}