#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
using namespace std;


int main() {
// puzzle price = 2.60lv
int puzzle;
// doll price = 3 lv
int doll;
// bear price = 4.10 lv
int bear;
// minion price = 8.20 lv
int minion;
// truck price = 2lv
int truck;
double tripPrice ;
 cin >> tripPrice;
 cin >> puzzle;
 cin >> doll;
 cin >> bear;
 cin >> minion;
 cin >> truck;

double puzzlePrice = puzzle * 2.6;
double dollPrice = doll * 3;
double bearPrice = bear * 4.10;
double minionPrice = minion * 8.20;
double truckPrice = truck * 2;

double totalMoney = puzzlePrice + dollPrice + bearPrice + minionPrice + truckPrice;
double totalToys = puzzle + doll + bear + minion + truck;
if (totalToys > 50) {
    double totalMoneyFinal = totalMoney * 0.75;
    double rent = totalMoneyFinal * 0.9;
    if (rent > tripPrice) {
        double left = rent - tripPrice;
        cout << "Yes! " << left << "lv left.\n";
        cout.setf (ios::fixed);
        cout.precision(2);
    }
    else if (rent < tripPrice) {
        double left = tripPrice - rent;
        cout << "Not enough money! " << left << "lv needed.\n";
    }
}
else if (totalToys < 50) {
    double rent = totalMoney * 0.9;
    if (rent < tripPrice) {
        cout << "Not enough money! " << tripPrice - rent << "lv needed.\n";
        cout.setf (ios::fixed);
        cout.precision(2);
    }
    else if (rent > tripPrice) {
        double left = rent - tripPrice;
        cout << "Yes! " << left << "lv left.\n";
        cout.setf (ios::fixed);
        cout.precision(2);
    

    }
}
else {
    cout << "Error\n";
}



  return 0;
}