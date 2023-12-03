#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>



using namespace std;

void printSign(int a);


int main() {
    
    int n;
    cin >> n;
    printSign(n);







  return 0;
}

void printSign(int a){
    cout << "The number " << a << " is ";
    if(a == 0){
        cout << "zero.";
    }
    else{
        if(a > 0){
            cout << "positive.";
        }
        else{
            cout << "negative.";
        }
    }
}










