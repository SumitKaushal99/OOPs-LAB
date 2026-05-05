#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("letters.txt");

    file.seekg(0, ios::end);
    cout << "File size = " << file.tellg() << " bytes";

    file.close();
    return 0;
}