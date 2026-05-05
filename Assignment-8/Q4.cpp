#include <iostream>
using namespace std;

template <typename T>
int linearSearch(T arr[], int size, T key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int n, key;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int pos = linearSearch(arr, n, key);

    if (pos != -1)
        cout << "Found at index " << pos;
    else
        cout << "Not found";

    return 0;
}