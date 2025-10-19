#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

void noteLock(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> v;
    for(int i = 0; i < n; i++){
        if(s[i] == '1') v.push_back(i);
    }
    if(v.empty()){
        cout << 0 << endl;
        return;
    }
    int count = 1;
    for(int i = 1; i < v.size(); i++){
        if(v[i] - v[i-1] >= k) count++;
    }
    cout << count << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        noteLock();
    }
}
