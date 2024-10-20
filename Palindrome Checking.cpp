#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversedStr;
    cout << "Enter a string: ";
    cin >> str;

    reversedStr = string(str.rbegin(), str.rend());

    if (str == reversedStr) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}

/*
Output Example:
Enter a string: madam
madam is a palindrome.
*/
