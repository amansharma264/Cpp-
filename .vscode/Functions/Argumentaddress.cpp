#include<iostream>
using namespace std;

int a = 9; // global variable

void fun(int x, int y){
    cout<< " Address of fun x" << &x <<  endl;
    cout << " Address of fun y" << &y <<  endl;
}

void f(){
    cout << a;
}

int main(){
    // int x = 3;
    // int y = 7;
    // cout<< " Address of main x" << &x <<  endl;
    // cout << " Address of main y" << &y <<  endl;
    //  fun(x,y);
    cout << a + 7 << endl;
    f();
}