#include <iostream>
#include <string>
using namespace std;

int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;

    int count1[26] = {0}; 
    int count2[26] = {0};

    string combined = guest + host;

    for (int i = 0; i < combined.length(); i++) {
        count1[combined[i] - 'A']++;
    }

    for (int i = 0; i < pile.length(); i++) {
        count2[pile[i] - 'A']++;
    }

    bool possible = true;
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
