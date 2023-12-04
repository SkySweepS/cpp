#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <sstream>



using namespace std;




int main() {

  double budget;
  cin >> budget;
  cin.ignore();
  string mall;


  
  while(mall != "mall.Exit"){
    getline(cin, mall);

    if (mall == "mall.Exit"){
      break;
      }
    

    istringstream iss(mall);
    char number;

    if(iss >> number){
      budget = budget - number;
      cout << budget;
    }
    if(budget <= 0){
      break;
    }
    else{
      cout << mall << endl;
    }

    
    }
  

 
  

  return 0;
}

    

    

  
