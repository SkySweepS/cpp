#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <cstring>


using namespace std;


int main() {
  
  int hriz;
  cin >> hriz;
  int rose;
  cin >> rose;
  int lale;
  cin >> lale;
  string season;
  cin >> season;
  char holiday;
  cin >> holiday;
  
  double hrizPrice;
  double rosePrice;
  double lalePrice;
  double totalPrice;
  
  if(season == "Spring" || season == "Summer"){
    hrizPrice = 2.00;
    rosePrice = 4.10;
    lalePrice = 2.50;
    }
  else if (season == "Autumn" || season == "Winter"){
    hrizPrice = 3.75;
    rosePrice = 4.50;
    lalePrice = 4.15;
    }
   if (holiday == 'Y'){
     hrizPrice *= 1.15;
     rosePrice *= 1.15;
     lalePrice *= 1.15;
     }
  totalPrice = (hriz * hrizPrice) + (rose * rosePrice) + (lale * lalePrice);

   if(lale > 7 && season == "Spring"){
     totalPrice *= 0.95;
     }
   if(rose >= 10 && season == "Winter"){
     totalPrice *= 0.90;
     }
   if((rose + lale + hriz) > 20){
     totalPrice *= 0.80;
     }
   cout.setf (ios::fixed);
   cout.precision(2);
cout << totalPrice + 2;


  return 0;
}