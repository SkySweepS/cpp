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
    int itemN;
    cin >> itemN;
   
    int price = 0;

    for(int i = 1; i <= itemN; i++){
        string itemS;
        cin >> itemS;
        
        if(itemS == "hoodie"){
        price += 30;
    }
    else if(itemS == "keychain"){
        price += 4;
    }
    else if(itemS == "T-shirt"){
        price += 20;
    }
    else if(itemS == "flag"){
        price += 15;
    }
    else if(itemS == "sticker"){
        price += 1;
    }
    }

    int num = itemN * price;
    if(budget >= price){
        cout << "You bought " << itemN << " items and left with " << budget - price << " lv." << endl;
    }
    else if(budget < price){
        cout << "Not enough money, you need " << price - budget << " more lv." << endl;
    }




   
    

   









  return 0;
}
