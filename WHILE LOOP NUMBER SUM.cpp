#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>
using namespace std;


int main() {

  string number;
  getline(cin, number);
  int sum = 0;

  while(number != "print sum") {
    int currentNum;

    currentNum = stoi(number);

    sum += currentNum;

    getline(cin, number);



  }

  cout << sum << endl;

  






  return 0;
}
