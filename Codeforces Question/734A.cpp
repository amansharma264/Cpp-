#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    fastio();
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll countA = 0;
    ll countB = 0;
    for(ll i = 0; i<n; i++){
        if(s[i] == 'A'){
            countA++;
        }
        else if (s[i] == 'D') {
            countB++;
        }
    }
    if(countA > countB){
        cout << "Anton\n";
    }
    else if (countB > countA) {
        cout << "Danik\n";
    }
    else{
        cout << "Friendship\n";
    }
}