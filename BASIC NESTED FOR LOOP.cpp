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

  int floor;
  cin >> floor;
  int rooms;
  cin >> rooms;

  for(int f = floor; f >= 1; f--){

    for(int r = 0; r < rooms; r++){
      if (f == floor) {
      cout << "L" << f << r << " ";
      }
      else{
        if(f % 2 ==0){
          cout << "O" << f << r << " ";
        }
        else {
          cout << "A" << f << r << " ";

        }
      }
    }
    cout << endl;
  }




  return 0;
}
