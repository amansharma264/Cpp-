#include<iostream>
using namespace std;
int main(){
    // int x = 7;
    // int* ptr = &x;
    // cout << ptr << endl; // 0xa6ac1ffdf4
    // ptr = ptr + 1;
    // cout << ptr << endl; // 0xa6ac1ffdf8

    // bool flag = true;
    // bool* ptr = &flag;
    // cout << ptr << endl; // 0xb5a99ffd77
    // ptr = ptr + 1;
    // cout << ptr << endl; // 0xb5a99ffd78

    int x = 4;
    int* ptr = &x;
    cout << *ptr << endl;
    *ptr = *ptr + 1;
    cout << *ptr << endl;
}