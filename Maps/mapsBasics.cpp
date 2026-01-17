#include<iostream>
#include<unordered_map>
#include<set>
using namespace std;

int main(){
    // pair<string, int> p;
    // p.first = "Aman";
    // p.second = 5;
    // cout << p.first;
    unordered_map<string, int> mp;
    // pair<string, int> p1;
    // p1.first = "Aman";
    // p1.second = 7;
    // mp.insert(p1);
    mp["Aman"] = 7;
    mp["Bikesh"] = 37;


    // for(pair<string, int> p : mp){
    //     cout << p.first << " " << p.second << endl;
    // }
    for(auto p : mp){
        cout << p.first << " " << p.second << endl;
    }

    cout << mp.size();

    mp.erase("Aman");
    mp.erase("Bikesh");
    for(auto p : mp){
        cout << p.first << " " << p.second << endl;
    }

    cout << mp.size();
    cout << mp["Aman"];
}