#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int zero = 0;
        int ones = 0;
        int n = s.length();

        for(int i = 0; i<n; i++){
            if(s[i] == '0'){
                zero++;
            }
            else{
                ones++;
            }
        }
        int moves = min(zero, ones);
        if(moves % 2 == 1){
            cout << "DA" << endl;
        }
        else{
            cout << "NET" << endl;
        }
    }
    return 0;
}