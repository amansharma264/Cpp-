#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i<n; i++){
            cin >> a[i];
        }
        vector <int> even, odd;
        for(int i = 0; i<n; i++){
            if(a[i] % 2 == 0){
                even.push_back(a[i]);
            }
            else{
                odd.push_back(a[i]);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        int evenNum = 0, oddNum = 0;
        for(int i = 0; i<n; i++){
            if(a[i] % 2 == 0){
                a[i] = even[evenNum++];
            }
        else{
            a[i] = odd[oddNum++];
        }
        }
        if(is_sorted(a.begin(), a.end())){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}