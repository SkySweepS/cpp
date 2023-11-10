#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
using namespace std;


int main() {

int number;
cout << "Enter a number: ";
cin >> number;

if (number <= 100) {
    cout << "Less than 100";
}
else if (number >= 100 && number <= 200) {
    cout << "Between 100 and 200";

}
else if (number >= 200) {
    cout << "Greater than 200";
}





  return 0;
}