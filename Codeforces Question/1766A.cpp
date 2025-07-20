#include <iostream>
using namespace std;

int countExtremelyRound(int n) {
    int digits = 0;
    int temp = n;
    
    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Extract most significant digit
    int most_significant = n;
    while (most_significant >= 10)
        most_significant /= 10;

    // Result formula
    return (digits - 1) * 9 + most_significant;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        cout << countExtremelyRound(n) << endl;
    }

    return 0;
}
