#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>
using namespace std;


int main() {

 int n;
 cin >> n;
 int sum = 0;
 for (int x = 0; x < n; x++)
 {
  int num;
  cin >> num;
  sum = sum + num;
 }
 cout << sum;



  return 0;
}
