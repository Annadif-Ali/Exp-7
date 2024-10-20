#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < length; ++i) {
        sum += arr[i];
    }

    float average = static_cast<float>(sum) / length;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}

/*
Output:
Sum: 15
Average: 3
*/
