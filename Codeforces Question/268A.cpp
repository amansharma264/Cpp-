#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int home[n], guest[n];

    // Input all home and guest uniform colors
    for (int i = 0; i < n; i++) {
        cin >> home[i] >> guest[i];
    }

    int count = 0;

    // Check for each match (i as host, j as guest)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && home[i] == guest[j]) {
                count++; // Host needs to wear guest uniform
            }
        }
    }

    cout << count << endl;
    return 0;
}
