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
	
	char start;
	cin >> start;
	char last;
	cin >> last;
	char miss;
	cin >> miss;
	
	int count = 0;
	
	for(char i = start; i <= last; i++){
		for(char i1 = start; i1 <= last; i1++){
			for(char i2 = start; i2 <= last; i2++){
				if (i != miss && i1 != miss && i2 != miss){
					count++;
				
					cout << i << i1 << i2 << " ";
					
					
				}
			}
		}
	}
	

cout << count;





  return 0;
}
