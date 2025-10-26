#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
    }

    bool seen[26] = {false};
    for (int i = 0; i < n; i++) {
        seen[s[i] - 'a'] = true;
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (seen[i]) count++;
    }
    if (count == 26)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
