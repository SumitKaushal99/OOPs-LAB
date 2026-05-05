#include <iostream>
using namespace std;

class Book {
public:
    string title, author, isbn;

    Book() {}

    Book(string title, string author, string isbn) {
        this->title = title;
        this->author = author;
        this->isbn = isbn;
    }
};

class Library {
    Book books[100];
    int count;

public:
    Library() { count = 0; }

    bool addNewBook(string title, string author, string isbn) {
        books[count] = Book(title, author, isbn);
        count++;
        return true;
    }

    bool removeBooks(string isbn) {
        for (int i = 0; i < count; i++) {
            if (books[i].isbn == isbn) {
                for (int j = i; j < count - 1; j++)
                    books[j] = books[j + 1];
                count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails() {
        for (int i = 0; i < count; i++) {
            cout << books[i].title << " "
                 << books[i].author << " "
                 << books[i].isbn << endl;
        }
    }
};

int main() {
    Library lib;

    lib.addNewBook("C++", "Bjarne", "101");
    lib.addNewBook("DSA", "CLRS", "102");

    lib.displayDetails();

    lib.removeBooks("101");

    cout << "\nAfter removal:\n";
    lib.displayDetails();

    return 0;
}