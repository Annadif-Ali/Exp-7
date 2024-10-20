#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 5, 1, 8, 2};
    int length = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0], max = arr[0];

    for (int i = 1; i < length; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    return 0;
}

/*
Output:
Minimum: 1
Maximum: 8
*/
