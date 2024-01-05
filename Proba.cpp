#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <cstring>


using namespace std;


int main() {

  
  int lowGrades;
  cin >> lowGrades;
  string enough = " ";
  int grade;
  double gradesTotal = 0;
  double count = 0;
  string problem = " ";
  double countLowG = 0;

  while(enough != "Enough"){
    
    
    problem = enough;
    cin.ignore();
    
    getline(cin, enough);
   cin >> grade;
    
    
    gradesTotal += grade;
     if(grade <= 4){
      countLowG++;
      if(countLowG == lowGrades){
        cout << "You need a break, " << lowGrades << " poor grades." << endl;
        break;
      }
    }

    if(enough == "Enough"){
      cout << "Average score : " << gradesTotal / count << endl;
      cout << "Number of problems: " << count << endl;
      cout << "Last problem: " << problem << endl;
      break;
    }
    
    
    count++;

  }
  


  return 0;
}

    

    
