#include<iostream>
using namespace std;

class Student{ // user defined data types
    public:
        string name;
        int rollNo;
        float marks;

        Student(string name, int rollNo, float marks){
            this->name = name;
            this->rollNo = rollNo;
            this->marks = marks;
        }


};

void change(Student* s){
    s->name = "Harsh";
}

int main(){
    Student* s = new Student("Aman", 7, 99.5);
    cout << s->name << endl;
    change(s);
    cout << s->name << endl;

}