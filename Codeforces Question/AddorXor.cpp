#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if(a == b) {
            cout << 0 << "\n";
        } 
        else if((a ^ 1) == b) {
            cout << y << "\n";
        }
        else if(a + 1 == b) {
            cout << x << "\n";
        }
        else if((a ^ 1) + 1 == b || (a + 1) ^ 1 == b) {
            cout << x + y << "\n";
        }
        else if(b > a) {
            cout << (b - a) * x << "\n";
        }
        else {
            cout << -1 << "\n";
        }
    }
    return 0;
}
