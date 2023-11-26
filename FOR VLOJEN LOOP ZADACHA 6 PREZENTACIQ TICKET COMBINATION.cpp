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

    int num;
    cin >> num;

    int count = 0;

    for (char i1 = 66; i1 <= 76; i1 ++){
        for(char i2 = 'f'; i2 >= 'a'; i2--){
            for(char i3 = 'A'; i3 <= 'C'; i3++){
                for(int i4 = 1; i4 <= 10; i4++){
                    for(int i5 = 10; i5 >= 1; i5--){
                        if(i1 % 2 == 0){
                            count ++;
                           if(count == num){
                            
                            cout << "Ticket combination: " << i1 << i2 << i3 << i4 << i5 << endl;
                            cout << "Prize: " << i1 + i2 + i3 + i4 + i5 << " lv." << endl;
                            break;
                           }
                        }

                    }
                }
            }
        }
        
    }





  return 0;
}
