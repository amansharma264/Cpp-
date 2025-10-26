#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p;
    cin >> p;
    vector<int> levels;

    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        levels.push_back(x);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int y;
        cin >> y;
        levels.push_back(y);
    }

    
    set<int> passed(levels.begin(), levels.end());

    if ((int)passed.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}
