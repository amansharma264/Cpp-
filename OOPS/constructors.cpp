#include<iostream>
using namespace std;

class Bike{
    public:
    int tyreSize;
    int engineSize;

    // default constructor
    Bike(int tyreSize , int engineSize){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
        cout << "Constructor call hua " << endl;
    }

    ~Bike(){
        cout << "Distructor call huaa : " << endl;
    } 

};



int main(){
    Bike tvs(12, 100); // objet create // contructors ko call jayegi
    Bike honda(13, 150);
    Bike royalEnfield(15, 350);
    bool flag = true;
    if(flag == true){
        Bike bmw(17 ,1000);
        cout << bmw.tyreSize << " " << bmw.engineSize << endl;
    }
    cout << tvs.tyreSize << endl;
    cout << honda.tyreSize << endl;
    cout << royalEnfield.tyreSize << endl;
    cout << tvs.engineSize << endl;
    cout << honda.engineSize << endl;
    cout << royalEnfield.engineSize << endl;
}