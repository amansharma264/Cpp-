#include <iostream>
#include <vector>
using namespace std;

void oddSum() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0;
    int odd = 0, even = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    if (sum % 2 == 1)
        cout << "YES" << endl;
    else if (odd > 0 && even > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        oddSum();
    }
}
