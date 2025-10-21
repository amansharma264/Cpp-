#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int count = 0;
    int minScore = v[0];
    int maxScore = v[0];

    for(int i = 1; i < n; i++) {
        if(v[i] > maxScore) {
            count++;
            maxScore = v[i];
        } else if(v[i] < minScore) {
            count++;
            minScore = v[i];
        }
    }

    cout << count << endl;
}
