#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

void amanSharma264(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i = 0; i<n; i++){
        cin >> arr[i];
    }
    int mini = *min_element(arr.begin(), arr.end());
    ll sum = 0;
    for(ll i = 0; i<n; i++){
        sum += (arr[i] - mini);
    }
    cout << sum << '\n';
}


int main(){
    ll t;
    cin >> t;
    while(t--){
        amanSharma264();
    }
}