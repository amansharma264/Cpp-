#include<iostream>
using namespace std;

void hanoi(int n, char a, char b, char c){
    if(n == 0) return;
    hanoi(n-1,a,c,b); // b is destination & c is helper 
    cout << a << " -> " << c << endl;
    hanoi(n-1,b,a,c);   // b se jane wala hu a ki help lekar c tak

}

int main(){
    int n = 4;
    hanoi(n,'A','B','C');
}