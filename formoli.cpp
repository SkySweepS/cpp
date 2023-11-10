#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
using namespace std;


int main() {
// v sluchaq 3 cifri sled desettichnata zapetaq
cout.setf (ios::fixed);
cout.precision(3);

// Random chislo v sluchaq ot 1 do 10
srand(time(NULL));
  int answer = rand() % 10;

  return 0;
}