#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;

void balancedArray(){
    int n;
    cin >> n;

        if(n % 4 != 0){
            cout << "NO" << endl;
            return;
        }
        cout << "YES" << endl;
        int k = n/2;
        vector<int> ans;
        for(int i = 1; i<=k; i++){
            ans.push_back(i*2);
        }
        for(int i = 1; i<k; i++){
            ans.push_back(i*2-1);
        }
        ans.push_back(3*k-1);
        for(int i = 0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        balancedArray();
    }
}