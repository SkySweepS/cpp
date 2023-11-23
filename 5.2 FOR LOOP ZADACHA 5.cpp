#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>
using namespace std;


int main() {

int number;
cin >> number;

double p1 = 0;
double p2 = 0;
double p3 = 0;




for (int i = 0; i < number; i++){
  int num;
  cin >> num;
  if (num % 2 == 0){
    p1++;
  }
  if(num % 3 == 0){
    p2++;
  }
  if(num % 4 == 0){
    p3++;
  }
  
}

double pp1 = 100 * (p1 / number);
double pp2 = (p2 / number) * 100;
double pp3 = (p3 / number) * 100;

cout.setf (ios::fixed);
cout.precision(2);


cout << pp1 << "%" << endl;
cout << pp2 << "%" << endl;
cout << pp3 << "%" << endl;

  return 0;
}

   
   
    