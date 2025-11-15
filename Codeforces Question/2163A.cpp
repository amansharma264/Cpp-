#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main() {
    fastio();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int duplicate = 0;
        for(int i = 0; i < n - 1; ) {
            if(a[i] == a[i+1]) {
                duplicate++;
                i += 2; 
            } else {
                i++;
            }
        }

        int pairs = (n - 1) / 2;

        if(duplicate >= pairs)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
