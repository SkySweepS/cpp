#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
using namespace std;


int main() {

    double budget;
    cin >> budget;
    string season;
    cin >> season;

    double money;
    string destination;
    string place;

    cout.setf (ios::fixed);
    cout.precision(2);

    if (budget <= 100 && season == "summer") {
       money = budget * 0.3;
       destination = "Bulgaria";
       place = "Camp";
    }
    else if (budget <= 100 && season == "winter") {
        money = budget * 0.7;
        destination = "Bulgaria";
        place = "Hotel";
    }
    else if (budget <= 1000 && season == "summer") {
        money = budget * 0.4;
        destination = "Balkans";
        place = "Camp";
    }
    else if (budget <= 1000 && season == "winter") {
        money = budget * 0.8;
        destination = "Balkans";
        place = "Hotel";
    }
    else if (budget > 1000) {
        money = budget * 0.9;
        destination = "Europe";
        place = "Hotel";
    }
    else{
        cout << "Error\n";
    }
    cout << "Somewhere in " << destination << " " << place << " - " << money << "\n";




  return 0;
}
