#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>
using namespace std;


int main() {

  double budget;
  cin >> budget;
  string category;
  cin >> category;
  int numberOfPeople;
  cin >> numberOfPeople;



  double travelMoney = 0;

  if (numberOfPeople <= 4){
    travelMoney = budget * 0.75;

  }
  else if (numberOfPeople <= 9){
    travelMoney = budget * 0.6;

  }
  else if (numberOfPeople <= 24){
    travelMoney = budget * 0.5;
  }
  else if (numberOfPeople <= 49){
    travelMoney = budget * 0.4;
  }
  else if (numberOfPeople >= 50){
    travelMoney = budget * 0.25;
  }
double tickets = budget - travelMoney;

if (category == "Normal"){
  double ticketGroup = 249.99 * numberOfPeople;
  if(ticketGroup < tickets){
    cout << "Yes! You have " << tickets - ticketGroup << " leva left.\n";
  }
  else if (ticketGroup > tickets){
    cout << "Not Enough money! You need " << ticketGroup - tickets << " leva.\n";
  }

}
else if (category == "VIP"){
   double ticketGroup = 499.99 * numberOfPeople;
  if(ticketGroup < tickets){
    cout << "Yes! You have " << tickets - ticketGroup << " leva left.\n";
  }
  else if (ticketGroup > tickets){
    cout << "Not Enough money! You need " << ticketGroup - tickets << " leva.\n";
  }


}


   



  return 0;
}
