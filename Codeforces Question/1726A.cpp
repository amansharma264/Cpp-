#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getMaxDiff(vector<int>& v){
    int n = v.size();
    int maxDiff = 0;
        for(int i = 0; i<n-1; i++){
            maxDiff = max(maxDiff, v[n-1] - v[i]);
        }
        for(int i = 1; i<n; i++){
            maxDiff = max(maxDiff, v[i]- v[0]);
        }
        for(int i = 0; i<n-1; i++){
            maxDiff = max(maxDiff, v[i] - v[i+1]);
        }
        return maxDiff;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }
        
        cout << getMaxDiff(v) << endl;

    }
    return 0;
}