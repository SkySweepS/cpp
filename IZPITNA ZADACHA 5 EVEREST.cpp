#include <iostream>
using namespace std;

int main(){
  
  
  string end;
  int metersClimbed = 5364;
  int days = 1;
  
  int meters;
  
  while(end != "END"){
    cout << "Rest or not: " << endl;
    cin >> end;
    
    
    
    if(end == "Yes"){
      
      
      cin >> meters;
      metersClimbed += meters;
      days++;
    }
    if(end == "No"){
      
      cin >> meters;
      metersClimbed += meters;
    }
    if(days == 5){
      break;
    }
    if(metersClimbed >= 8848){
      cout << "Goal reached for " << days << " days!" << endl;
      break;
    }
    
  }
  
  if(metersClimbed < 8848){
    cout << "Failed!" << endl << metersClimbed << endl;
  }
  
  
  
  return 0;
}