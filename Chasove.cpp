#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
using namespace std;


int main() {

    int examHour;
    cin >> examHour;
    int examMin;
    cin >> examMin;
    int arriveHour;
    cin >> arriveHour;
    int arriveMin;
    cin >> arriveMin;

    string late = "Late";
    string onTime = "On time";
    string early = "Early";

    int examTime = (examHour * 60) + examMin;
    int examArrive = (arriveHour * 60) + arriveMin;
    int totalMinDifference = examArrive - examTime;

    string studentArrive = late;

    if (totalMinDifference < -30) {
        
        studentArrive = early; 
    }
    else if (totalMinDifference <= 0) {
        studentArrive = onTime;

    }
    string result;
    if (totalMinDifference != 0) {
        int hoursDifference = abs(totalMinDifference / 60);
        int minDifference = abs(totalMinDifference % 60);
        if (hoursDifference > 0) {
            result = to_string(hoursDifference) + ":";
            if (minDifference < 10) {
                result += "0";
            }
            result += to_string(minDifference) + " hours";


        }
        else {
            result = to_string(minDifference) + " minutes";

        }
        if (totalMinDifference < 0) {
            result += " before the start"; 
        }
        else {
            result += " after the start";

        }
    }
    cout << studentArrive << endl;
    if (result != "") {
        cout << result << endl;
    }








  return 0;
}
