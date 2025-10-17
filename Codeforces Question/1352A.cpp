#include<iostream>
#include<vector>
using namespace std;

void sumOfRoundNumbers(){
    int n;
    cin >> n;
    vector<int> rounds;
    int place = 1;
    while(n > 0){
        int digit = n % 10;
        if(digit != 0){
            rounds.push_back(digit*place);
        }
        n /= 10;
        place *= 10;
    }
    cout << rounds.size() << endl;
    for(int num: nums){
        cout << num << endl;
    }

}

int main(){
    int t;
    cin >> t;
    while(t--){
        sumOfRoundNumbers();
    }
}