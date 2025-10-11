#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i = 0; i<n; i++){
            cin >> p[i];
        }
        bool flag = false;
        int idx_i, idx_j, idx_k;
        for(int j = 1; j<n-1; j++){
            if(p[j-1] < p[j] && p[j] > p[j+1]){
                flag = true;
                idx_i = j-1;
                idx_j = j;
                idx_k = j+1;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
            cout << idx_i + 1 << " " << idx_j + 1 << " " << idx_k + 1 << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}