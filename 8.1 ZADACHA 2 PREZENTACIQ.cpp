#include <iostream>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>

using namespace std;


int main() {

  string name;
  cin >> name;
  double money;
  cin >> money;
  int beerBottles;
  cin >> beerBottles;
  int chipsPacks;
  cin >> chipsPacks;

  double beerPrice = 1.20;
  double chipsPrice = (beerPrice * beerBottles) * 0.45;
  
  double chipsTotalPrice = ceil(chipsPrice * chipsPacks);
  
  double totalPrice = chipsTotalPrice + (beerPrice * beerBottles);
  cout.setf (ios::fixed);
  cout.precision(2);
  if (totalPrice <= money){
    cout << name << " bough a snack and has " << money - totalPrice << " leva left." << endl;
    
  }
  else{
    cout << name << " needs " << totalPrice - money << " more leva!" << endl;
  }
  
  
  
  
  



  return 0;
}