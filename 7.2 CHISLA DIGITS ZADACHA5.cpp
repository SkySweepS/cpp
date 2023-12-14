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
  
  string n;
  cin >> n;
  
  int row = (n[0] - 48) + (n[1] - 48);
  int m = (n[0] - 48) + (n[2] - 48);
  int num = stoi(n);
  
  for(int i = 1; i <= row; i++){
    for(int i2 = 1; i2 <= m; i2++){
      
  
  if(num % 5 == 0){
    num -= (n[0] - 48);
    cout << num << " ";
  }
  else if(num % 3 == 0){
    num -= (n[1] - 48);
    cout << num << " ";
  }
  else {
    num += (n[2] - 48);
    cout << num << " ";
  }
  
  
}
cout << endl;
}
    
      






  return 0;
  }