#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        
        set<int> s(v.begin(), v.end());
        
        if (s.size() <= 2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
