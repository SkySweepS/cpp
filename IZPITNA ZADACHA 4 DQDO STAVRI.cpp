#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>



using namespace std;


int main() {

  int numberOfDays;
  cin >> numberOfDays;
  
  double totalLiters;
  double totalGradus;
  
  for(int i = 1; i <= numberOfDays; i++){
    double litersOfRakia;
    cin >> litersOfRakia;
    double gradusOfRakia;
    cin >> gradusOfRakia;
    
    
    totalLiters += litersOfRakia;
    totalGradus += litersOfRakia * gradusOfRakia;
    
  }
    cout.setf (ios::fixed);
    cout.precision(2);
    double middleGradus = totalGradus / totalLiters;

    cout << "Litter: " << totalLiters << endl;
    cout << "Degrees: " << middleGradus << endl;
    
    if(middleGradus < 38){
      cout << "Not good, you should baking!";
    }
    else if (middleGradus >= 38 && middleGradus <= 42){
      cout << "Super!" << endl;
    }
    else {
      cout << "Dilution with distilled water!" << endl;
  }
    
    
    
    
    
    


  return 0;
}