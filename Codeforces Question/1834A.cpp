#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long positive_count = 0;
        long long negative_count = 0;
        for (long long i = 0; i < n; i++) {
            if (a[i] == 1)
                positive_count++;
            else if (a[i] == -1)
                negative_count++;
            // Ignore other values or handle as needed
        }
        long long operations = 0;
        while (positive_count < negative_count || negative_count % 2 == 1) {
            if (negative_count % 2 == 1) {
                negative_count--;
                positive_count++;
                operations++;
            } else if (positive_count < negative_count) {
                negative_count--;
                positive_count++;
                operations++;
            } else {
                break;
            }
        }
        cout << operations << endl;
    }
    return 0;
}