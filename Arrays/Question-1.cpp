// Given an array of marks of students, if the marks of any students is less than 35 print its roll number. [ roll number here refers to the index of the array].

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of students :";
    cin >> n;
    int marks[n];

    cout << "Enter the marks : ";

    // input
    for(int i = 0; i<=n-1; i++){
        cin >> marks[i];
    }


    for(int i = 0; i<=n-1; i++){
        if(marks[i] < 35) cout << i << " ";
    }
}