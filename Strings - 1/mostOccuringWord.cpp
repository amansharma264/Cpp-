#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str = "Aman is a maths teacher. He is a DSA mentor as well";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss >> temp){
        v.push_back(temp);
    }
    // // vector print
    // for(int i = 0; i<v.size(); i++){
    //     cout << v[i] << endl;
    // }
    cout << endl;
    sort(v.begin(), v.end());
    // // vector print 
    // for(int i = 0; i<v.size(); i++){
    //     cout << v[i] << endl;
    // }
    int maxCount = 1;
    int count = 1;
    for(int i = 0; i<v.size(); i++){
        if(v[i]== v[i-1]) count++;
        else count = 1;
        maxCount = max(maxCount, count);
    }
    count = 1;
    for(int i = 0; i<v.size(); i++){
        if(v[i]== v[i-1]) count++;
        else count = 1;
        if(count == maxCount){
            cout << v[i] << " " << maxCount << endl;
        }
    }

}