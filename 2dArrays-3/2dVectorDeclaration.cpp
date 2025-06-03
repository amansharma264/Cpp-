#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> v(5,2);
    // cout << v[0];
    vector<vector<int>> v(3,vector<int> (4, 20));
    // cout << v.size() << endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
