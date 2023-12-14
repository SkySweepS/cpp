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
  
  int n;
  cin >> n;
  
  for(int i = 1; i <= 9; i++){
      if (n % i == 0){
          for(int i2 = 1; i2<=9; i2++){
              if(n%i2== 0){
                  for (int i3 = 1; i3<=9; i3++){
                      if(n%i3 == 0){
                          for (int i4 = 1; i4<= 9; i4++)
                          if(n%i4==0){
                              cout << i << i2 << i3 << i4 << " ";
                          }
                      }
                  }
              }
          }
      }
  }
  
  






  return 0;
  }