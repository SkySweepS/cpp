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

   double percentMaz;
   cin >> percentMaz;
   double percentProt;
   cin >> percentProt;
   double percentVag;
   cin >> percentVag;
   double calories;
   cin >> calories;
   double water;
   cin >> water;

   double maznini = (calories * percentMaz / 100) / 9;
   double protein = (calories * (percentProt / 100)) / 4;
   double vagli = (calories * (percentVag / 100)) / 4;

   double foodWeight = maznini + protein + vagli;

   double calPerGram = calories / foodWeight;

   double waterCal = 100 - water;

   double result = calPerGram * (waterCal / 100);
   cout.setf (ios::fixed);
   cout.precision(4);

   cout << " " << result << " " << endl;




    

    





  return 0;
}
