#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>
using namespace std;


int main() {

   int n;
   cin >> n;

   double p1 = 0;
   double p2 = 0;
   double p3 = 0;
   double p4 = 0;
   double p5 = 0;

   

    

    


   for(int i = 1; i <= n; i++){
    int num;
    cin >> num;
    

    

    if(num < 200){
      p1++;
    }
    else if (num < 400){
      p2++;
    }
    else if (num < 600){
      p3++;
    }
    else if (num < 800){
      p4++;
    }
    else if (num >= 800){
      p5++;
    }
   

    

   }
   double l1 = p1*100/n;
   double l2 = p2*100/n;
   double l3 = p3*100/n;
   double l4 = p4*100/n;
   double l5 = p5*100/n;

   cout.setf (ios::fixed);
   cout.precision(2);

cout << l1 << endl << l2 << endl << l3 << endl << l4 << endl << l5 << endl;


  return 0;
}
