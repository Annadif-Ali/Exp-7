#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";
    for (int i = str.length() - 1; i >= 0; --i) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}

/*
Output:
olleH
*/
