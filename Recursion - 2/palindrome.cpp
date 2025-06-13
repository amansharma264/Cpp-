// Find out all the subarray of an array

#include<iostream>
#include<string>
#include<vector>
using namespace std;

// Brute FOrce method 
bool isPalindrome(string s){
    int i = 0;
    int j = s.length() - 1;
    while(i<j){
        if(s[i]!= s[j]) return false;
        i++;
        j--;
    }
    return true;
}

bool isPalindrome(string s, int i, int j){
    if(i>j) return true;
    if(s[i] != s[j]) return false;
    else return isPalindrome(s,i+1,j-1);
}

int main(){
    string s = "racecar";
    cout << isPalindrome(s,0,s.length()-1);
    
}