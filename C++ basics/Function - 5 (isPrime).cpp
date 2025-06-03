#include<iostream>
using namespace std;

//1 = prime
//0 = not a prime number

bool isPrime(int n){

    for(int i = 2; i<n; i++){

        //divide hogya hai, not a prime number
        if(n%i ==0){
            return 0;
        }
    }
    return 1;


}


int main(){
    int n;
    cin >> n;

    if(isPrime(n)){
        cout << "Is a prime number " << endl;
    }
    else{
        cout << "Not a prime number " << endl;
    }

}