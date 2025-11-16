#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    fastio();
    ll g, c, l;
    cin >> g >> c >> l;
    ll maxScore = max({g,c,l});
    ll minScore = min({g,c,l});
    if(maxScore - minScore >= 10){
        cout << "check again\n";
    }
    else{
        ll median = g + c + l - maxScore - minScore;
        cout << "final " << median << '\n';
    }
}