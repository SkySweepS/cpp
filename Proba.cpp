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

  int wantedJumpHigh;
  cin >> wantedJumpHigh;
  int jumpHigh;
  cin >> jumpHigh;
  double wantedJump = wantedJumpHigh - 30;
  int count = 0;
  int count2 = 0;

  if(jumpHigh > wantedJump){
    count++;
    wantedJump += 5;
    count2 = 0;
  }
  else if(wantedJump>=jumpHigh){
    count++;
    count2++;

  }
  
  while(jumpHigh <= wantedJumpHigh){
    
    cin >> jumpHigh;
    if(wantedJump < jumpHigh){
      count++;
      wantedJump += 5;
      count2 = 0;
    }
    else if(wantedJump>= jumpHigh){
      count++;
      count2++;
       if(count2 == 3){
        cout << "Tihomir failed at " << wantedJump << "cm after " << count << " jumps." << endl;
      break;
    }
      
    }
   
    
  }
  if(jumpHigh > wantedJumpHigh){
    cout << "Tihomir succeeded, he jumped over " << wantedJumpHigh << "cm after " << count << " jumps." << endl;
  return 0;
  }

  return 0;

}

  
    

    
