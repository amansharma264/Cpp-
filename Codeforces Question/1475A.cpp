#include <iostream>
using namespace std;

void oddDivisor() {
    long long n;
    cin >> n;

    while (n % 2 == 0)
        n /= 2;

    if (n > 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--)
        oddDivisor();

    return 0;
}
