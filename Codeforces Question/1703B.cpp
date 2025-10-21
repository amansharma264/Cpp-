#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int freq[26] = {0};
        int balloons = 0;
        for(int i = 0; i<n; i++){
            char ch = s[i];
            if(freq[ch - 'A'] == 0){
                balloons += 2;

                freq[ch - 'A'] = 1;
            }
            else{
                balloons += 1;
            }
        }
        cout << balloons << endl;
    }
}