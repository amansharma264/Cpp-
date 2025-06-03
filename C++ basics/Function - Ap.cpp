#include<iostream>
using namespace std;

int arithmetic(int num){
    int ap = 3*num - 7;
    return ap;
}
int main(){
    int n;
    cout << "Enter the value of N " << endl;
    cin >> n;

    int answer = arithmetic(n);
    cout << "The nth term is " << answer << endl;

}