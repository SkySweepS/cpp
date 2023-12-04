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
    
    int k;
    cin >> k;
    int l;
    cin >> l;
    int m;
    cin >> m;
    int n;
    cin >> n;
    
    int n1;
    int n2;
    int n3;
    int n4;
    int left;
    
    
    for(n1 = k; n1 <= 8; n1++){
        if(n1 % 2 == 0){
        for(int n2 = 9; n2 >= l; n2 -= 2){
            //cout << n1 << n2 << endl;
            for(n3 = m; n3 <= 8; n3++){
        if(n3 % 2 == 0){
        for (int n4 = 9; n4 >= n; n4 -= 2){
            if(n1 == n3 && n2 == n4){
                cout << "Cannot change the same player." << endl;
            }
            else {
            cout << n1 << n2 << " - " << n3 << n4 << endl;
        }
        }
    }
    }
    
            }
        }
    }
    

    


  return 0;
}










