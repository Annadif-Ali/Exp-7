#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2("World");
    string str3(str1);
    string str4(5, '*');

    cout << str1 << endl; // Output: Hello
    cout << str2 << endl; // Output: World
    cout << str3 << endl; // Output: Hello
    cout << str4 << endl; // Output: *****

    return 0;
}
