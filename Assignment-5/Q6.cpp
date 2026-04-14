#include <iostream>
using namespace std;

class Book {
public:
    string title, author;
    float price;

    void getBook() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter author: ";
        cin >> author;
        cout << "Enter price: ";
        cin >> price;
    }

    void showBook() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

class Textbook : public Book {
public:
    string subject;

    void getText() {
        cout << "Enter subject: ";
        cin >> subject;
    }

    void showText() {
        showBook();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Textbook t;

    t.getBook();
    t.getText();

    cout << "\nTextbook Details:\n";
    t.showText();

    return 0;
}