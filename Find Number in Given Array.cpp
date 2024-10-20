#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int number, found = 0;

    cout << "Enter a number to find: ";
    cin >> number;

    for (int i = 0; i < length; ++i) {
        if (arr[i] == number) {
            found = 1;
            break;
        }
    }

    if (found)
        cout << number << " is in the array." << endl;
    else
        cout << number << " is not in the array." << endl;

    return 0;
}

/*
Output Example:
Enter a number to find: 3
3 is in the array.
*/
