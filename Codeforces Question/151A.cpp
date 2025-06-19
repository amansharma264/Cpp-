#include<iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;     
    int total_slices = c * d;    
    int total_salt = p;          

    int drink_toasts = total_drink / (n * nl);  
    int lime_toasts = total_slices / n;         
    int salt_toasts = total_salt / (n * np);    

 
    int result = min(drink_toasts, min(lime_toasts, salt_toasts));

    cout << result << endl;
    return 0;
}
