#include <bits/stdc++.h>
using namespace std;

void destructionofthedandelionfields(){
    int n;
    cin >> n;
    vector<int> odd;
    int total = 0;
    for(int i = 0; i<n; i++){
        int a;
        cin >> a;
        total += a;
        if(a % 2 == 0){
            odd.push_back(a);
        }
        if(odd.size() % 2 == 1){
            int minOdd = *min_element(odd.begin(), odd.end());
            total -= minOdd;
        }
        cout << total << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        destructionofthedandelionfields();
    }
}