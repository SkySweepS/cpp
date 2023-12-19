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
  
  int students;
  cin >> students;
  double topStudents = 0;
  double students4 = 0;
  double students3 = 0;
  double failStudents = 0;
  
  double average = 0;
  for(int i = 0; i < students; i++){
    double grade;
    cin >> grade;
    if (grade >= 5.00){
      ++topStudents;
      average += grade;
      }
    else if (grade >= 4.00){
      ++students4;
      average += grade;
      }
    else if (grade >= 3.00){
      ++students3;
      average += grade;
      }
    else if (grade < 3.00){
      ++failStudents;
      average += grade;
      
      }
    }
    double percent5 = topStudents / students * 100;
    double percent4 = students4 / students * 100;
    double percent3 = students3 / students * 100;
    double percent2 = failStudents / students * 100;
    
    double middleGrade = average / students;
    
    cout.setf (ios::fixed);
    cout.precision(2);
    
    cout << "Top students: " << percent5 << "%" << endl;
    cout << "Between 4.00 and 4.99: " << percent4 << "%" << endl;
    cout << "Between 3.00 and 3.99: " << percent3 << "%" << endl;
    cout << "Fail: " << percent2 << "%" << endl;
    cout << "Average: " << middleGrade << endl;
    
    
    
    
    
    
    

  return 0;
}