#include <iostream>
using namespace std;

int findSmallestDigit(int x) {
    int minDigit = 9;
    while (x > 0) {
        minDigit = min(minDigit, x % 10);
        x /= 10;
    }
    return minDigit;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        cout << findSmallestDigit(x) << endl;
    }

    return 0;
}
