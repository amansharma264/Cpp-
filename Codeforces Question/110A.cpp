#include<iostream>
using namespace std;

bool isLucky(int num) {
    string s = to_string(num);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '4' && s[i] != '7')
            return false;
    }
    return true;
}

int main() {
    string n;
    cin >> n;
    int count = 0;

    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '4' || n[i] == '7') {
            count++;
        }
    }

    if (isLucky(count))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
