#include <iostream>
#include <cstdlib>
#include <stdlib.h>



using namespace std;

int main() {

for (int number = 1; number <= 100; number++) 
 if (number % 15 == 0) {
  cout << "FizzBuzz\n";
 }
 else if (number % 5 == 0) {
  cout << "Buzz\n";
 }
 else if (number % 3 == 0) {
  cout << "Fizz\n";
 }
 else {
  cout << number << "\n";
 }





  return 0;
}