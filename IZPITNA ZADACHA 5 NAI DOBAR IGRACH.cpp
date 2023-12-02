#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>



using namespace std;



int main() {
  cout << "Enter name: " << endl;
  string name;
  getline(cin, name);
  int maxNum = INT_MIN;
  string playerName;
  
  while(name != "END"){
    
    


    cout << "Enter goals: " << endl;
    int goals;
    cin >> goals;
    cin.ignore();
    
   
    if(goals > maxNum){
      maxNum = goals;
      playerName = name;
    }
    if(goals >= 10){
      
      break;
    }





    cout << "Enter name: " << endl;
    getline(cin, name);

    
  }
  if(maxNum >= 3){
    cout << playerName << " is the best player!" << endl;
    cout << "He has scored " << maxNum << " goals and made a hat-tick !!!" << endl;
  }
  else if(maxNum < 3){
    cout << playerName << " is the best player!" << endl;
    cout << "He has scored " << maxNum << " goals." << endl;
  }
  

  return 0;
}

    

    

  
