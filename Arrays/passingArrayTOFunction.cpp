#include<iostream>
using namespace std;

void display(int a[]){
    for(int i = 0; i<=4; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}

void change(int b[]){
    b[0] = 100;

}

int main(){
    int arr[] = {1, 4, 2, 7, 4};
    // accessing the elemets of array while passing in another function
    // updation , pass by value / reference 

    display(arr);
    change(arr);
    display(arr);
}