#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>> ch;
    if(ch>='a' && ch<='z'){
        cout<< "This is lower case character " << ch <<endl;
    }
    else if(ch >='A' && ch<='Z'){
        cout<< "This is a upper case character " << ch <<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<< "This is numeric value " << ch << endl;
    }
}