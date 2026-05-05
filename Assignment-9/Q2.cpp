#include <iostream>
#include <fstream>
using namespace std;

int countAlphabets(string fileName) {
    ifstream file(fileName);
    char ch;
    int count = 0;

    while (file.get(ch)) {
        if (isalpha(ch))
            count++;
    }

    file.close();
    return count;
}

int main() {
    cout << "Total alphabets = " << countAlphabets("NOTES.txt");
    return 0;
}