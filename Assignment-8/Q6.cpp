#include <iostream>
using namespace std;

template <typename T>
class Stack {
    T arr[100];
    int top;

public:
    Stack() { top = -1; }

    void push(T val) {
        if (top == 99) {
            cout << "Stack full\n";
            return;
        }
        arr[++top] = val;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack empty\n";
            return;
        }
        cout << "Popped: " << arr[top--] << endl;
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.pop();
    return 0;
}