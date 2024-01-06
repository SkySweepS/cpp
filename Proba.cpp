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

    if (jumpHigh > wantedJumpHigh) {
        cout << "Tihomir succeeded, he jumped over " << wantedJumpHigh << "cm after " << count << " jumps." << endl;
        return 0;
    } else if (wantedJump >= jumpHigh) {
        count++;
        count2++;
    }

    while (jumpHigh <= wantedJumpHigh) {
        cin >> jumpHigh;
        count++;

        if (wantedJump < jumpHigh) {
            wantedJump += 5;
            count2 = 0;
        } else if (wantedJump >= jumpHigh) {
            count2++;
            if (count2 == 3) {
                cout << "Tihomir failed at " << wantedJump << "cm after " << count << " jumps." << endl;
                return 0;
            }
        }
    }

    cout << "Tihomir succeeded, he jumped over " << wantedJumpHigh << "cm after " << count << " jumps." << endl;

    return 0;
}