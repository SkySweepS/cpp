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

    int budget;
    cin >> budget;

    string el;
    string leave;
    int clothsBought = 0;
    int moneySpend = 0;

    while (el != "enough"){
        
        cin >> el;
        
        if (el == "enter"){
            while(el != "leave") {

                

                cin >> el;
                if(el == "leave"){
                    break;
                }
               
                if((budget - stoi(el)) < 0){
                    cout << "Not enough money." << endl;

                }
                
                if (budget - stoi(el) >= 0){
                budget -= stoi(el);
                clothsBought++;
                moneySpend += stoi(el);
                
                 
                }
                
            }
            
        }
        
     }
     cout << "For " << clothsBought << " clothes I spent ";
                cout << moneySpend << " lv and have " << budget << " lv left." << endl;


  return 0;
}
