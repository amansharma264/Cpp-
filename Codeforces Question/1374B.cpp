#include<iostream>
#include<vector>
using namespace std;

void minimum(){
    int n;
    cin >> n;
    int count2 = 0, count3 = 0;

    while(n % 2 == 0){
        n /= 2;
        count2++;
    }
    while(n % 3 == 0){
        n /= 3;
        count3++;
    }

    if(n != 1){
        cout << "-1" << endl;
        return;
    }

    if(count2 <= count3){
        cout << (count3 - count2) + count3 << endl;
    } else {
        cout << "-1" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        minimum();
    }
    return 0;
}
