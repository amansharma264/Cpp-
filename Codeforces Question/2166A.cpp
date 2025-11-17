#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define ld long double
#define endl '\n'

int main(){
    fastio();
    ll t;
    cin >> t;
    while(t--){
        ll a, b, n;
        cin >> a >> b >> n;

        ld pos = 0;
        ll move = 0;
        ll m = n;

        while(m > 0){
            ld len = min((ld)b, (ld)a / m);

            ld need = ceil(pos / len);
            if(need < 1) need = 1;

            if(need > m){
                ld x = m * len;
                if(pos != x){
                    move++;
                    pos = x;
                }
                m--;
            }else{
                ld x = need * len;
                if(pos != x){
                    move++;
                    pos = x;
                }
                m--;
            }
        }

        cout << move << endl;
    }
}
