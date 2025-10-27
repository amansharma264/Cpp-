#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    fastio();
    ll n, k;
    cin >> n >> k;
    ll timeSpent = 0, problem = 0;
    for(ll i = 1; i<=n; i++){
        timeSpent += 5*i;
        if(timeSpent + k <= 240){
            problem++;
        }
        else{
            break;
        }
    }
    cout << problem << '\n';
}