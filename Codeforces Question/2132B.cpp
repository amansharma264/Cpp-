#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> ans;
        int count = 0;

        long long p = 1;
        long long p1 = p*10 + 1;
        while(p1 <= n){
            if((n % p1) == 0){
                ans.push_back(n / p1);
                count++;
            }
            p = p * 10;
            p1 = p * 10 + 1;
        }

        cout << count << endl;
        for(int i = count - 1; i >= 0; i--){
            cout << ans[i] << endl;
        }
        if(count > 0) cout << "\n";
    }
}
