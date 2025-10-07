#include<iostream>
using namespace std;

void walkingMaster(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(d < b){
        cout << -1 << endl;
        return;
    }
    int k = d - b;
    if(c > a + k){
        cout << -1 << endl;
        return;
    }
    int total = a + 2*k - c;
    cout << total << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        walkingMaster();
    }
}