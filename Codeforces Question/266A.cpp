#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    string s;
    cin >> s;
    int n = s.length();
    int count = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == s[i+1]){
            count++;
        }
    }
    cout << count << endl;
}