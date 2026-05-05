#include <iostream>
using namespace std;

template <typename T>
T findMin(T arr[], int size) {
    T minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Minimum = " << findMin(arr, n);
    return 0;
}