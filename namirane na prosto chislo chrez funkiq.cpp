#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; i++){
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int limit;

    cin >> limit;


    for (int i = 2; i <= limit; i++){
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}