#include<iostream>
#include<algorithm>
using namespace std;

void spellCheck(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n != 5){
        cout << "NO" << endl;
        return;
    }
    string name = "Timur";
    sort(s.begin(),s.end());
    sort(name.begin(),name.end());

    if(s == name){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        spellCheck();
    }
}