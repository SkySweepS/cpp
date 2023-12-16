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
  
  double savedMoney;
  cin >> savedMoney;
  double floorWidth;
  cin >> floorWidth;
  double floorLenght;
  cin >> floorLenght;
  double triangleSide;
  cin >> triangleSide;
  double triangleH;
  cin >> triangleH;
  double tilePrice;
  cin >> tilePrice;
  double workerPrice;
  cin >> workerPrice;
  
  double floorS = floorWidth * floorLenght;
  double tileS = triangleSide * triangleH / 2;
  double tilesNeeded = floorS / tileS;
  
  double allTiles = ceil(tilesNeeded) + 5;
  
  
  double totalPrice = allTiles * tilePrice + workerPrice;
  
  cout.setf (ios::fixed);
  cout.precision(2);
  if (totalPrice <= savedMoney){
    
    cout << savedMoney - totalPrice << " lv left." << endl;
  }
  else {
    cout << "You'll need " << totalPrice - savedMoney << " lv more." << endl;
  }
    





  return 0;
}