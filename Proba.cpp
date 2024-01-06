#include <iostream>

using namespace std;

int main() {
    int wantedJumpHigh;
    cin >> wantedJumpHigh;

    int jumpHigh;
    cin >> jumpHigh;
    double wantedJump = wantedJumpHigh - 30;
    int count = 1;
    int count2 = 0;

    if (jumpHigh >= wantedJump) {
        wantedJump += 5;
        count2++;
    }

    while (jumpHigh <= wantedJumpHigh) {
        count++;

        if (wantedJump > jumpHigh) {
            count2++;
            if (count2 == 3) {
                cout << "Tihomir failed at " << wantedJump << "cm after " << count << " jumps." << endl;
                return 0;
            }
        }

        cin >> jumpHigh;

        if (jumpHigh > wantedJumpHigh) {
            cout << "Tihomir succeeded, he jumped over " << wantedJumpHigh << "cm after " << count << " jumps." << endl;
            return 0;
        }

        if (wantedJump >= jumpHigh) {
            count2 = 0;
        }

        wantedJump += 5;
    }

    return 0;
}