#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    // set<int> s;
    // s.insert(5);
    // s.insert(3);
    // s.insert(7);
    // for(int ele : s){
    //     cout << ele << " ";
    // }

    map<string, int> map;
    map["Aman"] = 20;
    map["Bikesh"] = 10;
    map["Pratik"] = 30;
    for(auto x : map){
        cout << x.first << " ";
    }
}