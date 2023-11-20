#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
using namespace std;


int main() {
    // neobhodimi chasove
    int hoursNeeded;
    cin >> hoursNeeded;
    // dnite s koito firmata razpolaga
    int days;
    cin >> days;
    // broi rabotnici
    int workers;
    cin >> workers;


    // 10 hurs per day working
    
    double lostDays = days * 0.1;
    double workDays = days - lostDays;

    
    double extraHours = (workers * 2) * workDays;
   
    double normalHours = (workers * 8 * workDays);
    
    
    double total = extraHours + normalHours;
   

   
    
    
    if (total >= hoursNeeded) {
        int a = total - hoursNeeded;
        cout << "Yes!" << a << " hours left.\n";

            }
            else {
                int a = hoursNeeded - total;
                cout << "Not enough time!" << a << " hours needed.";
            }

   









  return 0;
}
