#include<iostream>
#include<set>
using namespace std;
int main(){
    string username;
    cin >> username;
    set<char> uniqueLetters;

    for (char c : username) {
        uniqueLetters.insert(c);
    }

    if (uniqueLetters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}