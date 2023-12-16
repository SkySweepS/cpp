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
  
  double speed;
  cin >> speed; 
  double time1;
  cin >> time1;
  double time2;
  cin >> time2;
  double time3;
  cin >> time3;
  
  double time1H = time1 / 60;
  double time2H = time2 / 60;
  double time3H = time3 / 60;
  
  double distance1 = time1H * speed;
  double speed1 = speed * 1.1;
  double distance2 = time2H * speed1;
  double speed2 = speed1 * 0.95;
  double distance3 = time3H * speed2;
  
  double distance = distance1 + distance2 + distance3;
  
  
  cout.setf (ios::fixed);
  cout.precision(2);
  
  cout << distance;






  return 0;
}