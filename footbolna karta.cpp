#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
using namespace std;


int main() {

vector<int> square{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

vector<string> name{"Germany", "Spain", "France", "Italy", "Bulgaria", "Greece", "Poland", "Russia", "Belarus", "England", "Portugal", "Serbia", "Austria", "Hungary", "Romania", "Moldova", "Ukraine", "Finland", "Switzerland", "Albania"};

   string teamName;
    cin >> teamName;

    int count = 1;
    srand(time(NULL));
    int answer = rand() % 20;
    
   


    while(count <= 3){
    cout << "Choose your team: " << endl;
    cin >> teamName;
    
    if(teamName == "Germany"){
        
        
        cout << "Team choosen." << endl;
    }
    if(teamName == "Germany"){
        cout << "Team already choosen." << endl;
        }
    
    if(teamName == "Spain"){
        count++;
        cout << "Team already choosen." << endl;}
    if(teamName == "Spain"){
        cout << "Team choosen." << endl;
    }
/*
    if(teamName == "France" && team3 == true){
        count--;
        cout << "Team already choosen." << endl;}
    if(teamName == "France"){
        team1 = true;
        cout << "Team choosen." << endl;
        }
    
    if(teamName == "Germany" && team1 == true){
        count--;
        cout << "Team already choosen." << endl;}
    
      if(teamName == "Italy"){}
    
      if(teamName == "Bulgaria"){}
     
      if(teamName == "Greece"){}
    
      if(teamName == "Poland"){}
    if(teamName == "Russia"){}
    if(teamName == "Belarus"){}
    if(teamName == "England"){}
    if(teamName == "Portugal"){}
    if(teamName == "Serbia"){}
    if(teamName == "Austria"){}
    if(teamName == "Hungary"){}
    if(teamName == "Romania"){}
    if(teamName == "Moldova"){}
    if(teamName == "Ukraine"){}
    if(teamName == "Finland"){}
    if(teamName == "Switzerland"){}
    if(teamName == "Albania"){}*/
    }


  return 0;
}
