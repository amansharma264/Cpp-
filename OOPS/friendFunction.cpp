#include<iostream>
#include<vector>
#include<string>
using namespace std;

class ComplexNumber{
    private:
    int priv;
    public:
    int imaginary;
    int real;

    friend ComplexNumber operator +(ComplexNumber &c1, ComplexNumber &c2);

    friend class PrimeNumber;


    ComplexNumber operator -(ComplexNumber &c1){
        ComplexNumber c3;
        c3.imaginary = c1.imaginary - this->imaginary;
        c3.real = c1.real - this->real;
        return c3;
    }
};

class PrimeNumber {
    void show(ComplexNumber &c){
        c.priv = 10;
    }
};

ComplexNumber operator +(ComplexNumber &c1, ComplexNumber &c2){
    ComplexNumber c3;
        c3.imaginary = c1.imaginary + c2.imaginary;
        c3.real = c1.real + c2.real;
        return c3;
}


int main(){
    const int a = 5;
    cout << a << endl;
}
