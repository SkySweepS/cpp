#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>



using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; i++){
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

  int n1;
  cin >> n1;
  int n2;
  cin >> n2;
  int n3;
  cin >> n3;

  
    
    for(int i1 = 2; i1 <= n1; i1 += 2){
      int prime;
     
      for(prime = 2; prime <= n2; prime ++){
          if(isPrime(prime)){

        for(int i3 = 2; i3 <= n3; i3 += 2){
          
          cout << i1 << prime << i3 << endl;
          
        }
        
      }
    }
    }





  return 0;
}