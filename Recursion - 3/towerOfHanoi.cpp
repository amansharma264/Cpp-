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


#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int from, int aux, int to) {
    if (n == 0) return;
    hanoi(n - 1, from, to, aux);
    cout << from << " " << to << "\n";
    hanoi(n - 1, aux, from, to);
}

int main() {
    int n;
    cin >> n;
    long long moves = pow(2, n) - 1;
    cout << moves << "\n";
    hanoi(n, 1, 2, 3);
    return 0;
}
