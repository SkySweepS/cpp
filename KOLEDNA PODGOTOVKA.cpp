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

  int rollsNum;
  cin >> rollsNum;
  int silkNum;
  cin >> silkNum;
  double glue;
  cin >> glue;
  double percentDiscount;
  cin >> percentDiscount;

  double rollPrice = rollsNum * 5.80;
  double silkPrice = silkNum * 7.20;
  double gluePrice = glue * 1.20;

  double totalPrice = rollPrice + silkPrice + gluePrice;

  double discount = totalPrice * (percentDiscount / 100);
  double total = totalPrice - discount;
  

  cout.setf (ios::fixed);
  cout.precision(3);
  cout << total;





  return 0;
}

    

    

  
