#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

bool isPrime(int n){
    if(n == 1) return false;

    for(int i = 2; i<=sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n,m;
    cin >> n >> m;
    int nextPrime = -1;
    for(int i = n+1; i<=50; i++){
        if(isPrime(i)){
            nextPrime = i;
            break;
        }
    }
    if(nextPrime == m){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}