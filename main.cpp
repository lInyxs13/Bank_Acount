#include <iostream>
#include "BankAccount.h"
using namespace std;

int main () {
    string name;
    cin >> name;

    double checking;
    cin >> checking;

    double saving;
    cin >> saving;

    BankAccount(name, checking, saving);
    return 0;
}