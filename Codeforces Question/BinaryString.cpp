#include <iostream>
#include <string>
using namespace std;

void binary() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        bool flag = false;
        for (int i = 0; i <= n - k; ++i) {
            bool allOne = true;
            for (int j = i; j < i + k; ++j) {
                if (s[j] == '0') {
                    allOne = false;
                    break;
                }
            }
            if (allOne) {
                flag = true;
                break;
            }
        }
        cout << (flag ? "Bob" : "Alice") << '\n';
    }
}

int main(){
    binary();
    return 0;
}