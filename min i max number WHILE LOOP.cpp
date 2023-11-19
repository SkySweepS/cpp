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
    cin >> number;
    
    int maxNum = INT_MIN;
    int minNum = __INT_MAX__;
    

    while(number != "END") {

      int currentNum;

      currentNum = stoi(number);
      cin >> number;

      if(currentNum < minNum) {
        minNum = currentNum;
      }
      if (currentNum > maxNum){
        maxNum = currentNum;
      }

      

    }
    

    cout << "Max number is: " << maxNum << " Min number is: " << minNum << endl;




  






  return 0;
}
