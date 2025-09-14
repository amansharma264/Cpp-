#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k; 
        string s;
        cin >> s;
        int currentW = 0;
        for(int i = 0; i<k; i++){
            if(s[i] == 'W') currentW++;
        }
        int minW = currentW;
        for(int i = k; i<n; i++){
            if(s[i-k] == 'W') currentW--;
            if(s[i] == 'W') currentW++;
            minW = min(minW, currentW);
        }
        cout << minW << endl;
    }
}