#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void makeItBeautiful() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[0]) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "No\n";  
    } else {
        cout << "Yes\n"; 
        sort(arr.begin(), arr.end());

        if (arr[0] == arr[n - 1]) {
        } else {
            reverse(arr.begin() + 1, arr.end());
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        makeItBeautiful();
    }
}
