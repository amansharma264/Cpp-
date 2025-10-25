#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string prev, curr;
    int count = 1; 

    cin >> prev;

    for (int i = 1; i < n; i++) {
        cin >> curr;
        if (curr != prev) {
            count++; 
        }
        prev = curr;
    }

    cout << count << "\n";
    return 0;
}
