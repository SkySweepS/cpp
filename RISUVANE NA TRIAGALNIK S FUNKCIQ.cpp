#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>



using namespace std;

void triangle (int startin, int endin){
    for(int i = startin; i <= endin; i++){
      cout << i << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        triangle(1, i);
    }
    for(int i = n - 1; i >= 1; i--){
      triangle(1,i);
    }


  return 0;
}










