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

int maxSum = 0;

string maxName;


while (name != "STOP") {
  int currSum = 0;


  for(int i = 0; i < name.size(); i++){
    currSum += name[i];

  }
  if (currSum > maxSum){
    maxSum = currSum;
    maxName = name;
  }


  cin >> name;
}



  return 0;
}
