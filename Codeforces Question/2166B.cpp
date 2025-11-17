#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        long long a, b, n;
        cin >> a >> b >> n;

        long double mouse = 0;      /
        long long moves = 0;
        long long m = n;           

        while(m > 0) {
            long double len = min((long double)b, (long double)a / m);

            long double target_i = ceil(mouse / len);
            if(target_i < 1) target_i = 1;
            if(target_i > m) {
                long double newMouse = m * len;
                if(mouse != newMouse) {
                    moves++;
                    mouse = newMouse;
                }
                m--;
            } else {
                
                m--;
            }
        }

        cout << moves << "\n";
    }
    return 0;
}
