#include<iostream>
using namespace std;
int main(){
    int n, m, a;
    cin >> n >> m >> a;
    long long length = (n + a - 1) / (long long)a;
    long long width = (m + a - 1) / (long long)a;
    cout << length * width << endl;
    return 0;
}