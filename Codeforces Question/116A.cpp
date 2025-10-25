#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int passengers = 0, capacity = 0;
    for(int i = 0; i<n; i++){
        int a,b;
        cin >> a >> b;
        passengers -= a;
        passengers += b;
        capacity = max(capacity, passengers);
    }
    cout << capacity << endl;
}