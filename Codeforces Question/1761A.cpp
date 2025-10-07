#include<iostream>
#include<algorithm>
using namespace std;

void twoPermutations(){
    int n, a, b;
    cin >> n >> a >> b;
    if(a + b + 2 <= n || (a == b && a == n)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        twoPermutations();
    }
}