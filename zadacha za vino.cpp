#include <iostream>
#include <string>

using namespace std;

int main () {
    // plosht na loze
    double size;
    cin >> size;
    double sizeX = size * 0.4;
    // kg grozde na 1kv metar
    double kgGrape;
    cin >> kgGrape;
    // nujni litri vino
    int wineZ;
    cin >> wineZ;
    // rabotnici
    int workers;
    cin >> workers;
    double wineLiters = (kgGrape * sizeX) / 2.5;
  
    if (wineLiters < wineZ) {
        cout << "It will be a tough winter! More " << wineZ - wineLiters << " litters wine needed\n";
          cout.setf (ios::fixed);
          cout.precision();
    }
    else if (wineLiters > wineZ) {
        cout << "Good harvest this year! Total wine: " << wineLiters << " liters\n";
        cout << wineLiters - wineZ << " liters left\n" << (wineLiters - wineZ) / workers << " liters per person.\n";
    }
    else {
        cout << "Error";
    }
    
    
    
    
    
    
    
    return 0;
}
