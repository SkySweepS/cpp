#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
using namespace std;


int main() {

double grade;

cin >> grade;

if (grade > 6.00) {
    cout << "Invalid Grade\n";
}
else if (grade >= 5.50) {
    cout << "Exellent" << "\n";
}


else if (grade >= 4.50) {
    cout << "Well Done\n";
}
else if (grade >= 3.50) {
    cout << "Good\n"; 
}
else if (grade > 2.00) {
    cout << "Acceptable\n";
}
else if (grade < 2) {
    cout << "Invalid Grade\n";
}
else {
    cout << "invalid Grade\n";
}


  return 0;
}