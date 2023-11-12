#include <iostream> 
#include <string>
using namespace std;
int main() {
    double km;
    cout << "Enter distance in kilometers\n";
    cin >> km;
    string dayOrNight;
    cout << "Enter time of travel: \n";
    cin >> dayOrNight;
    
    double price = 0;
    
    double taxiRate = 0;
    
    if (dayOrNight == "day") {
        taxiRate = 0.79;
    }
    else {
        taxiRate = 0.90;
    }
    
    if (km < 20) {
        price = 0.70 + km * taxiRate;
    }
    else if (km < 100) {
        price = km * 0.09;
        
    }
    else {
        price = km * 0.06;
    }
        
    cout << price << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
