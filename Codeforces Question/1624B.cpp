#include<iostream>
using namespace std;

void makeAp(){
    int a,b,c;
    cin >> a >> b >> c;

    bool flag = false;
    if((2*b - c) > 0 && (2*b - c) % a == 0){
        flag = true;
    }
    else if((a + c) % (2*b) == 0 && (a + c)/(2*b) > 0){
        flag = true;
    }
    else if((2*b - a) > 0 && (2*b-a) % c == 0){
        flag = true;
    }
    cout << (flag ? "YES" : "NO") << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        makeAp();
    }
}