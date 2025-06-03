#include<iostream>
using namespace std;

class vehicle{
    public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;

    void showCompany(){
        cout << companyName << endl;
    }
};

class car : public vehicle{ // car is a child of vehicle
    public: 
    int steeringSize;
};

class Bike : public vehicle{
    public:
    int handleSize;
    Bike(){
        cout << "bike ka constructor call hua\n";
    }
};

class A{
    private: // cann't be access , caan't be inherited
    int a_ka_private;
    protected: // can't be access , can be inherited
    int a_ka_protected;
    public: // can be access, can be inherited
    int a_ka_public;

    A(){
        cout << "a ka constructor call hua\n";
    }
};

class B : protected A{
    public:
    int b_ka_public;

    B(){
        cout << "b ka constructor call hua\n";
    }
};

class C : public B{
    public:
    int c_ka_public;

    C(){
        cout << "c ka constructor call hua\n";
    }

 
};


int main(){
    C c;
}