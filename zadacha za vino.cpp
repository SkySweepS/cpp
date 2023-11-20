#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>

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

        int x = abs(wineLiters - wineZ);
        cout.setf (ios::fixed);
        cout.precision(0);
        cout << "It will be a tough winter! More " << x << " liters wine needed." << endl;;
          
    }
    else if (wineLiters >= wineZ) {
        int x = wineLiters - wineZ;
        cout.setf (ios::fixed);
        cout.precision(0);
        cout << "Good harvest this year! Total wine: " << wineLiters << " liters." << endl;;
        cout << x << " liters left -> " << (wineLiters - wineZ) / workers << " liters per person." << endl;
    }
    
    
    
    
    
    
    
    return 0;
}
