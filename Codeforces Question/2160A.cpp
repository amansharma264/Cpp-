#include<iostream>
#include<vector>
using namespace std;

void mexPartition() {
    int n;
    cin >> n;
    vector<int> ans(n);
    vector<int> v(101, 0);
    
    for (int i = 0; i < n; i++) {
        cin >> ans[i];
        if (ans[i] <= 100)
            v[ans[i]]++;
    }

    int f0 = 101, f1 = 101;

    for (int i = 0; i <= 100; i++) {
        if (v[i] == 0) {
            f0 = i;
            break;
        }
    }

    for (int i = 0; i <= 100; i++) {
        if (v[i] == 1) {
            f1 = i;
            break;
        }
    }

    if (f1 == 101) cout << f0 << endl;
    else cout << max(f0, f1) << endl;
}



int main(){
    int t;
    cin >> t;
    while(t--){
        mexPartition();
    }
}