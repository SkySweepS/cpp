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


  double dailyMoney;
  cin >> dailyMoney;
  double moneyPerDay;
  cin >> moneyPerDay;
  double expenses;
  cin >> expenses;
  double giftPrice;
  cin >> giftPrice;

  double savedDaily = 5 * dailyMoney;
  double moneySaved = 5 * moneyPerDay;
  double totalSavings = (savedDaily + moneySaved) - expenses;
  if(totalSavings >= giftPrice){
    cout << "Profit: " << totalSavings << " BGN, the gift has been pruchased." << endl;
  }
  else{
    cout << "Insufficient money: " << giftPrice - totalSavings << " BGN." << endl;
  }




    

    





  return 0;
}

    

    


