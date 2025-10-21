#include<iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        if(s.length() % 2 != 0) {
            cout << "NO" << endl; 
            continue;
        }

        int n = s.length() / 2;
        string first = s.substr(0, n);
        string second = s.substr(n, n);

        if(first == second)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
