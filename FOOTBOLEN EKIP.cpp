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
  
  double tShurtPrice;
  cin >> tShurtPrice;
  double ballPrice;
  cin >> ballPrice;

  double shortsPrice = tShurtPrice * 0.75;\
  double socksPrice = shortsPrice * 0.20;
  double shoes = (2 * tShurtPrice) + (2 * shortsPrice);

  double price = (tShurtPrice + shortsPrice + socksPrice + shoes);

  double discount = price * 0.85;

  if(discount >= ballPrice){
    cout << "Yes, he will earn the world-cup replica ball!" << endl;
    cout << "His sum is " << discount << " lv." << endl;
  }
  else {
    cout << "No, he will not earn the world-cup replica ball." << endl;
    cout << "He needs " << ballPrice - discount << " lv. more." << endl;
  }




  return 0;
}

    

    

  
