#include<iostream>
using namespace std;

class Player{
    private:
    int score;
    int health;

    public:
    // setter
    void setScore(int s){
        score = s;
    }

    void setHealth(int h){
        health = h;

    }

    // getter
    int getScore(){
        return score;
    }

    int getHealth(){
        return health;
    }

    // void showHealth(){
    //     cout << "Health is : " << health << endl;
    // }

    // void showScore(){
    //     cout << "score is : " << score << endl;;
    // }
};

// class calculator{
//     public:
//     int a;
//     int b;

//     void add(){
//         cout << a + b << endl;
//     }

//     void subtract(){
//         cout << a - b;
//     }
// };

int main(){


    // int score[100] = {};
    // int health[100] = {};

    // Player amit; 
    // amit.score = 90;
    // amit.health = 100;

    // amit.showHealth();
    // amit.showScore();

    // calculator calci;
    // calci.a = 10;
    // calci.b = 7;
    // calci.add();
    // calci.subtract();

    Player harsh;
    harsh.setScore(10);
    harsh.setHealth(50);
    cout << harsh.getScore() << endl;;
    cout << harsh.getHealth();

}