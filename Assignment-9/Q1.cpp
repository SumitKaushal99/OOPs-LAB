#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("NUM.txt");

    for (int i = 1; i <= 200; i++) {
        file << i << " ";
    }

    file.close();
    cout << "Numbers written to file.";
    return 0;
}
