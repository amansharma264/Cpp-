#include<iostream>
using namespace std;

class Cricketer{
    public:
    char name;
    int age;
    int noOfTestMatches;
    int averageScore;
};

int main(){


    vector<Cricketer> Cricketers;

    Cricketer virat;
    virat.name = 'V';
    virat.age = 30;
    virat.noOfTestMatches = 100;
    virat.averageScore = 80;

    Cricketer dhoni;
    dhoni.name = 'D';
    dhoni.age = 40;
    dhoni.noOfTestMatches = 200;
    dhoni.averageScore = 100;

    for(int i = 0;i<2; i++){
        Cricketer *Cricketer = new Cricketer;
        Cricketer->name = ;

        Cricketers.add(*Cricketer);
    }

    Cricketer Cricketers[2] = {virat, dhoni};

    for(int i = 0; i<2; i++){
    cout << Cricketers[i].name << endl;
    cout << Cricketers[i].age << endl;
    cout << Cricketers[i].noOfTestMatches << endl;
    cout << Cricketers[i].averageScore << endl;

    }

}