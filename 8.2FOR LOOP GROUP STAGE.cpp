#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>



using namespace std;


int main() {


    string teamName;
    cin >> teamName;
    int games;
    cin >> games;

    int points = 0;

    int goalCount = 0;
    int receivedCount = 0;

    for(int i = 1; i <= games; i++){
        int goals;
        cin >> goals;
        int receivedGoals;
        cin >> receivedGoals;

        if(goals > receivedGoals){
            points += 3;
        }
        else if(goals == receivedGoals){
            points += 1;
        }

        goalCount += goals;
        receivedCount += receivedGoals;
        
    }


    if(goalCount >= receivedCount){
        cout << teamName << " has finished the group phase with ";
        cout << points << " points" << endl;
        cout << "Goal difference: " << goalCount - receivedCount << " points." << endl;
    }
    else {
        cout << teamName << " has been eliminated from the group phase." << endl;
        cout << "Goal difference: " << receivedCount - goalCount << endl;
    }

   
    

   









  return 0;
}
