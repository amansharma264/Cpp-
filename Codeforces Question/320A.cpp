#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long

void amanSharma264(){
    fastio();
    string s;
    cin >> s;
    int i = 0;
    int n = s.size();

    bool ok = true;
    while(i < n){
        if(i+2 < n && s.substr(i, 3) == "144"){
            i += 3;
        }
        else if(i+1 < n && s.substr(i, 2) == "14"){
            i += 2;
        }
        else if(s[i] == '1'){
            i++;
        }
        else{
            ok = false;
            break;
        }
    }

    if(ok) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    fastio();
    ll t;
    cin >> t;
    while(t--){
        amanSharma264();
    }
}
