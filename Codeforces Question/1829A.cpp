#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    string target = "codeforces";
    while(t--){
        string s;
        cin >> s;
        int count = 0;
        for(int i = 0; i<10; i++){
            if(s[i] != target[i]){
                count++;
            }
        }
        cout << count << endl;
    }
}