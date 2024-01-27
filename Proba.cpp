#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <math.h>




using namespace std;


int main() {

    int seats;
    cin >> seats;
    string movie = "";
    int takenSeats;
    while(1){
        getline(cin, movie);
        if(movie == "Movie time!"){
            break;
        }
        takenSeats += stoi(movie);
        cout << takenSeats;
        if(seats < 0){
            break;
        }
        

    }

     

  return 0;
}
