#include<iostream>
#include<string>
using namespace std;
int main(){
    string x;
    cin >> x;
    
    for(int i = 0; i < x.size(); i++){
        int t = x[i] - '0';
        int invert = 9 - t;

        if(invert < t && !(i == 0 && invert == 0)){
            x[i] = invert + '0';
        }
    }
    cout << x << endl;
    return 0;
}