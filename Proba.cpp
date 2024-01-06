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

  string player1Name;
  cin >> player1Name;
  string player2Name;
  cin >> player2Name;

  string endGame = " ";
  string card = " ";

  double player1Points = 0;
  double player2Points = 0;

  while(endGame != "End of game" || card != "End of game"){
    cin.ignore();
    getline(cin, endGame);
    getline(cin, card);
    if(endGame[0] > card[0]){
      player1Points++;

    }
    else if(endGame[0] < card[0]){
      player2Points++;
    }
    else if(endGame[0] == card[0]){
      getline(cin, endGame);
      getline(cin, card);
      if(endGame[0] > card[0]){
        cout << "Number wars!" << endl;
        cout << player1Name << " is winner with " << player1Points << " points" << endl;
        
      }
      else if(endGame[0] < card[0]){
        cout << "Number wars!" << endl;
        cout << player2Name << " is winner with " << player2Points << " points" << endl;
        
      }
      break;
      }

  }
cout << player1Points << endl;
  return 0;

}

  
    

    
