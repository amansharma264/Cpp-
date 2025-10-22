#include <bits/stdc++.h>
using namespace std;

void aAndb(){
    int n;
    string s;
    cin >> n >> s;
    int a = 0, b = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == 'a') a++;
        else b++;
    }

    if (a == 0 || b == 0) {
        cout << 0 << endl;
        return;
    }

    int minMovesA = n;
    for(int start = 0; start + a <= n; start++){
        int countB = 0;
        for(int j = start; j<start + a; j++){
            if(s[j] == 'b') countB++;
        }
        if(countB < minMovesA) minMovesA = countB;
    }
    int minMovesB = n;
    for(int start = 0; start + b <= n; start++){
        int countA = 0;
        for(int j = start; j<start + b; j++){
            if(s[j] == 'a') countA++;
        }
        if(countA < minMovesB) minMovesB = countA;
    }
    int answer = min(minMovesA, minMovesB);
    cout << answer << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        aAndb();
    }
}