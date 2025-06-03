// write a function that takes the radius of a circle as an argument and return its area

#include<iostream>
using namespace std;

double area(int radius){
    return 3.14*radius*radius;
}

int main(){
    int radius;
    cin >> radius;
    cout << "Area of the circle is : " << area(radius) << "units square";
    return 0;
}