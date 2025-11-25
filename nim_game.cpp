/*
---------------------------------------------------------------
  Title       : Nim Game Winner Checker
  Description : Determines whether a player can win the Nim Game
                based on the number of stones. If n is divisible
                by 4, the player will lose; otherwise, they win.

  Author      : Devbrat
  Date        : 2025-11-24
  Version     : 1.0
---------------------------------------------------------------
*/

#include <iostream>
using namespace std;

bool canWinNim(int n) {
    return n % 4 != 0;
}

int main() {
    int n;
    cout << "Enter number of stones: ";
    cin >> n;

    if (canWinNim(n))
        cout << "You can win the Nim Game!" << endl;
    else
        cout << "You will lose the Nim Game." << endl;

    return 0;
}
