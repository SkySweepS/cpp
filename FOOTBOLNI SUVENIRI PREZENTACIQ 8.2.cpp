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


    string teamName;
    cin >> teamName;
    string suvType;
    cin >> suvType;
    int purchased;
    cin >> purchased;

    double price = 0;
    double sum = price * purchased;
    cout.setf (ios::fixed);
    cout.precision(2);

    if(teamName == "Argentina"){
        if(suvType == "flags"){
            price += 3.25;
            
        }
        else if(suvType == "caps"){
            price += 7.20;
            
        }
        else if(suvType == "posters"){
            price += 5.10;
            
        }
        else if(suvType == "stickers"){
            price += 1.25;
            
        }
        if(suvType == "flags" || suvType == "caps" || suvType == "posters" || suvType == "stickers"){
            cout << "Pepi bought " << purchased << " " << suvType << " of ";
    cout << teamName << " for " << price * purchased << " lv." << endl;
        }
        else {
           cout << "Invalid stock!" << endl;
        }
        
    }
    else if (teamName == "Brazil"){
        if(suvType == "flags"){
            price += 4.20;
            
        }
        else if(suvType == "caps"){
            price += 8.50;
            
        }
        else if(suvType == "posters"){
            price += 5.35;
            
        }
        else if(suvType == "stickers"){
            price += 1.20;
            
        }
        if(suvType == "flags" || suvType == "caps" || suvType == "posters" || suvType == "stickers"){
            cout << "Pepi bought " << purchased << " " << suvType << " of ";
    cout << teamName << " for " << price * purchased << " lv." << endl;
        }
         else {
           cout << "Invalid stock!" << endl;
        }
        
    }
    else if(teamName == "Croatia"){
        if(suvType == "flags"){
            price += 2.75;
            
        }
        else if(suvType == "caps"){
            price += 6.90;
            
        }
        else if(suvType == "posters"){
            price += 4.95;
            
        }
        else if(suvType == "stickers"){
        price += 1.10;
        
        }
        if(suvType == "flags" || suvType == "caps" || suvType == "posters" || suvType == "stickers"){
            cout << "Pepi bought " << purchased << " " << suvType << " of ";
    cout << teamName << " for " << price * purchased << " lv." << endl;
        }
         else {
            cout << "Invalid stock!" << endl;
        }
        
    }
    else if(teamName == "Denmark"){
        if(suvType == "flags"){
            price += 3.10;
            
        }
        else if(suvType == "caps"){
            price += 6.50;
            
        }
        else if(suvType == "posters"){
            price += 4.80;
            
        }
        else if(suvType == "stickers"){
            price += 0.90;
            
        }
        if(suvType == "flags" || suvType == "caps" || suvType == "posters" || suvType == "stickers"){
            cout << "Pepi bought " << purchased << " " << suvType << " of ";
    cout << teamName << " for " << price * purchased << " lv." << endl;
        }
         else {
            cout << "Invalid stock!" << endl;
        }
        
    }
    else{
        cout << "Invalid country!" << endl;
    }
    

   









  return 0;
}
