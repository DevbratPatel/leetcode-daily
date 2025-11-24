/*
---------------------------------------------------------------
  Title       : Ugly Number Checker
  Description : This program determines whether a given integer
                is an Ugly Number. Ugly numbers are positive
                numbers whose prime factors include only 2, 3, and 5.
                Example: 1, 2, 3, 4, 5, 6, 8, 10, 12...

  Author      : Devbrat
  Date        : 2025-11-24
  Version     : 1.0
  Usage       : 
        Compile: g++ ugly_number_checker.cpp -o ugly
        Run    : ./ugly
---------------------------------------------------------------
*/

#include <iostream>
using namespace std;

// Function to check if a number is an Ugly Number
bool isUgly(int n) {
    if (n <= 0) return false;

    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;

    return n == 1;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isUgly(n)) {
        cout << "Yes, it is an Ugly Number." << endl;
    } else {
        cout << "No, it is NOT an Ugly Number." << endl;
    }

    return 0;
}
