#include<iostream>
using namespace std;
int main(){
    long long x = INT_MAX;
    cout << (x% 5 + 2% 5)% 5 << "\n";
    return 0;
}