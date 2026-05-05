#include <iostream>
using namespace std;

class Book {
public:
    string title, author, isbn;
};

class Library {
    Book books[100];
    int count;

public:
    Library() {
        count = 0;
    }

    bool addNewBook(string &title, string &author, string &isbn) {
        books[count].title = title;
        books[count].author = author;
        books[count].isbn = isbn;
        count++;
        return true;
    }

    bool removeBooks(string &isbn);

    void displayDetails() {
        cout << "\nBooks in Library:\n";
        for (int i = 0; i < count; i++) {
            cout << books[i].title << " | "
                 << books[i].author << " | "
                 << books[i].isbn << endl;
        }
    }
};

// outside class
bool Library::removeBooks(string &isbn) {
    for (int i = 0; i < count; i++) {
        if (books[i].isbn == isbn) {
            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}

int main() {
    Library lib;

    string t, a, i;

    // adding 5 books
    for (int k = 0; k < 5; k++) {
        cout << "\nEnter title, author, ISBN: ";
        cin >> t >> a >> i;
        lib.addNewBook(t, a, i);
    }

    lib.displayDetails();

    cout << "\nEnter ISBN to remove: ";
    cin >> i;

    if (lib.removeBooks(i))
        cout << "Book removed\n";
    else
        cout << "Not found\n";

    lib.displayDetails();

    return 0;
}
