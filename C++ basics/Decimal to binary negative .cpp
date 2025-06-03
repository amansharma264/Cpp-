#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    if(n<0){
        n = -1*n;
    }
    while(n!=0){
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i = i+ 1;
    }

cout << "Answer is " << (~ans + 1)*-1 << endl;
}