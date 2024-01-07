#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <sstream>



using namespace std;

//Basketball Equipment


int main() {

  string nameOfTournament = " ";
  int games;

  int winCount = 0;
  int loseCount = 0;
  int gamesCount = 0;
  
  

  while(nameOfTournament != "End of tournament"){
    
    getline(cin, nameOfTournament);
    if(nameOfTournament == "End of tournament"){
      break;
    }
    getline(cin, games);
    for(int i = 1; i <= games; i++){
      int points1;
      getline(cin, points1);
      int points2;
      getline(cin, points2);
      gamesCount++;
      if(points1 > points2){
        winCount++;
        
        cout << "Game " << gamesCount << " of tournament " << nameOfTournament << ": win with " << points1 - points2 << " points." << endl;
        cout << winCount << "win" << endl;
      }
      else if(points2 > points1){
        loseCount++;
        cout << "Game " << gamesCount << " of tournament " << nameOfTournament << ": lost with " << points2 - points1 << " points." << endl;
        cout << loseCount << "lose" << endl;
              }
    }
  }

  double winPercent = winCount / games * 100;
  double losePercent = loseCount / games * 100;

  cout << winPercent << "% matches win" << endl;
  cout << losePercent << "% matches lost" << endl;

  return 0;
}

    

    

  
