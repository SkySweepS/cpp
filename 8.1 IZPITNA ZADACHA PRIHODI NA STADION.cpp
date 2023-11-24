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

  int sectors;
  cout << "Enter number of sectors: " << endl;
  cin >> sectors;

  int stadium;
  cout << "Enter stadium capacity: " << endl;
  cin >> stadium;

  double ticket;
  cout << "Enter ticket price: " << endl;
  cin >> ticket;

  double sectorIncome = (stadium * ticket) / sectors;

  double totalIncome = stadium * ticket;

  double charityMoney = (totalIncome - (sectorIncome * 0.75)) * 0.12500000001;


  cout.setf (ios::fixed);
  cout.precision(2);




    
  
  cout << "Total income - " << totalIncome << " BGN" << endl;
  cout << "Money for charity - " << charityMoney << " BGN" << endl;




  return 0;
}
