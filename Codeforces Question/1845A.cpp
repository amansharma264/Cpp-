#include<iostream>
using namespace std;

void forbiddenInteger(){
    int n, k, x;
    cin >> n >> k >> x;

    if(x != 1){
        cout << "YES\n";
        cout << n << "\n";
        for(int i = 0; i < n; i++) cout << 1 << " ";
        cout << "\n";
        return;
    }

    if(k == 1){
        cout << "NO\n";
        return;
    }

    if(n % 2 == 0){
        cout << "YES\n";
        cout << n / 2 << "\n";
        for(int i = 0; i < n / 2; i++) cout << 2 << " ";
        cout << "\n";
    }else{
        if(k >= 3){
            cout << "YES\n";
            cout << (n - 3) / 2 + 1 << "\n";
            cout << 3 << " ";
            for(int i = 0; i < (n - 3) / 2; i++) cout << 2 << " ";
            cout << "\n";
        }else{
            cout << "NO\n";
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        forbiddenInteger();
    }
}
