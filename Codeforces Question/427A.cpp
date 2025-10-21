#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int available_officers = 0;
    int untreated = 0;

    for (int i = 0; i < n; i++) {
        int event;
        cin >> event;

        if (event == -1) {
            if (available_officers > 0) {
                available_officers--;
            } else {
                untreated++;
            }
        } else {
            available_officers += event;
        }
    }

    cout << untreated << endl;
    return 0;
}
