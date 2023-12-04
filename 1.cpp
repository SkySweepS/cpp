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
  int bought = 0;

while(mall != "mall.Exit"){
  getline(cin, mall);
   cin.ignore();
  if(mall == "mall.Enter"){
    while(mall != "mall.Exit"){
     getline(cin, mall);

      if (mall == "mall.Exit"){
        break;
      }

   
        

       vector<char> cV;
       
       for(char c : mall){
        cV.push_back(c);
        
      }

       for(char c : cV){
        

        if(c >= 'A' && c <= 'Z'){
          double percent = c * 0.5;
          budget -= percent;
          bought++;
          
        }
        else if(c >= 'a' && c <= 'z'){
          double percent = c * 0.3;
          budget -= percent;
          bought++;
          
        }
        else if(c == '%'){
          budget = budget / 2;
          bought++;
          
        }
        else if(c == '*'){
          budget += 10;
          
        }
        else{
          budget -= c;
          bought++;
          
        }
       }
       
        
        

      
      
      
  

    

      
      
      if(budget <= 0){
        break;
      }
      

    
    }
  }
  if(mall == "mall.Exit" || budget < 0){
    break;
  }
}
  cout.setf (ios::fixed);
  cout.precision(2);
  cout << bought << " purchases. Money left: " << budget << " lv." << endl;

 
  

  return 0;
}

    

    

  
