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
  double wantedJump = wantedJumpHigh - 30;
  
  int jumpHigh;
  cin >> jumpHigh;
  
  int count = 0;
  int count2 = 0;

  if(jumpHigh > wantedJump ){
    count++;
    wantedJump += 5;
    count2 = 0;
    
  }
  else if(jumpHigh <= wantedJumpHigh && wantedJump <= wantedJumpHigh){
    count++;
    count2++;

  }
  
  
  while(jumpHigh <= wantedJumpHigh && wantedJump < wantedJumpHigh){
     


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
        
      break;
    }
      
    }
    if(count2 == 3){
      break;
    }
   if(jumpHigh > wantedJumpHigh){
    
    break;
   }
     
  }
 
  if(jumpHigh > wantedJumpHigh){
    cout << "Tihomir succeeded, he jumped over " << wantedJumpHigh << "cm after " << count << " jumps." << endl;
  
  }
  if(count2 == 3){
    cout << "Tihomir failed at " << wantedJump << "cm after " << count << " jumps." << endl;
  }

  return 0;

}

  
    

    
