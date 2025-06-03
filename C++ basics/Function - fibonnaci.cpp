#include<iostream>
using namespace std;
void fibonnaci(int n){
    int a = 0;
    int b = 1;
    cout << a <<" "<< b << " ";
    for(int i = 0; i<=n; i++){
        int nextnum = a + b;
        cout << nextnum<< " ";

        a = b;
        b = nextnum;
    }
    return;
    
}


int main(){
    int n;
    cout << "Enter the value of N " << endl;
    cin >> n;

    fibonnaci(n);

}