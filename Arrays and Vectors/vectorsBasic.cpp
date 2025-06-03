#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v;  // you need not mention the size
    v.push_back(6);
    cout << v.capacity() << endl;
    v.push_back(1);
    cout << v.capacity() << endl;
    v.push_back(9);
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
   

    // v[0] = 88;
    // cout <<v[0] << " ";
    // cout <<v[1] << " ";
    // cout <<v[2] << " ";
    // cout <<v[3] << " ";
}