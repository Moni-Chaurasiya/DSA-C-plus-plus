#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Prime number check
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    if (n <= 1) {
        cout << "Not a prime number" << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Prime number" << endl;
    } else {
        cout << "Not a prime number" << endl;
    }

    return 0;
}