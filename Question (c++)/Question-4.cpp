// Q4. Write a function to count the number of digits in a number and then print the square of this number.

#include<iostream>
using namespace std;

int square(int n){
    return n * n;
}

int countNumberofDigits(int num){
    if(num == 0) return 1;  // Handle 0 explicitly
    int ans = 0;
    while(num > 0){
        ans++;
        num /= 10;
    }
    return ans;
}

int main(){
    int num;
    cin >> num;
    int numberofDigits = countNumberofDigits(num);
    cout << square(numberofDigits) << endl;
    return 0;
}
