#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int steps = x/5 + (x % 5 != 0);
    cout << steps << endl;
    return 0;
}