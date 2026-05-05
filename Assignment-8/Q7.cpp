#include <iostream>
using namespace std;

template <typename T>
class Queue {
    T arr[100];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    void enqueue(T val) {
        arr[++rear] = val;
    }

    void dequeue() {
        if (front > rear) {
            cout << "Queue empty\n";
            return;
        }
        cout << "Removed: " << arr[front++] << endl;
    }
};

int main() {
    Queue<int> q;
    q.enqueue(5);
    q.enqueue(15);
    q.dequeue();
    return 0;
}