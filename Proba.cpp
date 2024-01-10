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
	
 double vaucher;
 cin >> vaucher;
 cin.ignore();
 string bought = " ";
 double price = 0;
 int ticket = 0;
 int other = 0;
 
 
 
 while(bought != "End" || vaucher < 0){
 	getline(cin, bought);
	 int a = bought[0] + bought[1];
    int b = bought[0];

	 
	 if(bought.length() > 8){
	 	price = a;
		 ticket++;
	 }
	 else if(bought.length() <= 8){
	 	price = b;
		 other++;
	 }
	
	
	 vaucher -= price;
	 
	 cout << vaucher << endl;
	 cout << a << endl;
 cout << b << endl;	
 }


cout << ticket << endl;
cout << other << endl;

  return 0;
}
