#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
using namespace std;
// BOOLEAN
0 = false
  1 = true

int main() {
// v sluchaq 3 cifri sled desettichnata zapetaq
cout.setf (ios::fixed);
cout.precision(3);

// Random chislo v sluchaq ot 1 do 10
srand(time(NULL));
  int answer = rand() % 10;

  return 0;
}
// Vgradeni funkcii

// Minimalna stoinost na int okolo - 2 miliarda i neshto vgradena stoinost
INT_MIN

// Maksimalna stoinost na int
INT_MAX
// prevrashta string v int
stoi(number)

// prevrashta int v string
to_string(number)

// OTPECHATVA CELIQ RED , AKO E SAMO cin >> OTPECHATVA SAMO 1VATA DUMA
cin.ignore();
string word;
   getline(cin, word);


// namirane na strani na pravoagalnik v koordinatnata sistema s funkciq FABS:
  double width = fabs(x2 - x1);
  double height = fabs(y2 - y1);

// ZAKRAGLQ CHISLO DO PO GOLQMATA STOINOST
double number = 2.14;
ceil(number);
