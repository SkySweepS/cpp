#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>



using namespace std;

void printRecipHeader();
void printRecipBody();
void printRecipFooter();
void printRecip();

int main() {
    
    
    printRecip();






  return 0;
}

void printRecipHeader(){
    cout << "CASH RECEIPT" << endl;
    cout << "---------------------" << endl;
}
void printRecipBody(){
    cout << "Charget to___________" << endl;
    cout << "Received by__________" << endl;
}
void printRecipFooter (){
    cout << "--------------------" << endl;
    cout << "(c) SoftUni" << endl;
}
void printRecip(){
    printRecipHeader();
    printRecipBody();
    printRecipFooter();
}









