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
  int l;
  cin >> l;
  
  
  
  for (int p1 = 1; p1 < n; p1++){
    for(int p2 = 1; p2 < n; p2++){
      for(char l1 = 'a'; l1 < 97 + l; l1++){
        for(char l2 = 'a'; l2 < 97 + l; l2++){
          for(int p3 =(p1, p2) + 1; p3 < n; p3++){
            cout << p1 << p2 << l1 << l2 << p3 << " ";
          }
        }
      }
    }
  }
  
  






  return 0;
}