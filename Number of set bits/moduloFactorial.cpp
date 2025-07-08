#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7; // Define the modulo

vector<int> factorial(int n) {
    vector<int> v(n + 1, 1);
    for (int i = 2; i <= n; i++) {
        v[i] = (1LL * i % MOD * v[i - 1] % MOD) % MOD;
    }
    return v;
}

int main() {
    vector<int> res = factorial(25);
    for (int i = 0; i < res.size(); i++) {
        cout << i << "! = " << res[i] << "\n";
    }
    return 0;
}
