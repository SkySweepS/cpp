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
    
    double money;
    cin >> money;
    string k1;
    cin >> k1;
    string k2;
    cin >> k2;
    
    double bgn;
    double result = 0;
    double usd = 1.79549;
    double euro = 1.95583;
    double gbp = 2.53405;
    
    if(k1 == "USD" ){
        if(k2 == "BGN"){
        result = money * usd;
        }
        else if(k2 == "EUR"){
            bgn = money * usd;
        result = bgn / euro;
        }
        else if(k2 == "GBP"){
            bgn = money * usd;
            result = bgn / gbp;
        }
    }
    else if (k1 == "EUR"){
        if(k2 == "BGN"){
            result = money * euro;
        }
        else if(k2 == "USD"){
            bgn = money * euro;
            result = bgn / usd;
        }
        else if(k2 == "GBP"){
            bgn = money * euro;
            result = bgn / gbp;
        }
    }
    else if(k1 == "GBP"){
        if (k2 == "BGN"){
            result = money * gbp;
        }
        else if (k2 == "USD"){
            bgn = money * gbp;
            result = bgn / usd;
        }
        else if(k2 == "EUR"){
            bgn = money * gbp;
            result = bgn / euro;
        }
    }
    else if(k1 == "BGN"){
        if(k2 == "USD"){
            result = money / usd;
        }
        else if(k2 == "EUR"){
            result = money / euro;
        }
        else if(k2 == "GBP"){
            result = money / gbp;
        }
    }
    cout << result << " " << k2 << endl;
    
    
    

  return 0;
}










