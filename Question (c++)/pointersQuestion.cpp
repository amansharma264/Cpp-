// Write a program to find the product of two numbers using pointers.

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    int *ptrx, *ptry;
    ptrx = &x;
    ptry = &y;
    int ans;
    int *ptrans = &ans;
    *ptrans = (*ptrx)*(*ptry);
    cout << *ptrans << endl;
    return 0;
}