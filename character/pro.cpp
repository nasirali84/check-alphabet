// Write a program to check whether a character is an alphabet or not.

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is an alphabet.";
    } else {
        cout << ch << " is not an alphabet.";
    }

    return 0;
}