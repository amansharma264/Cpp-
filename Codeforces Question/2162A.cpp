#include <iostream>
using namespace std;

void beautifulAvg() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << maxVal << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        beautifulAvg();
    }
    return 0;
}
