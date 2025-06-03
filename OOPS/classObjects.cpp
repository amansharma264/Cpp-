#include <iostream>
using namespace std;

class Gun {
public:
    int ammo;
    int damage;
    int scope;
};

class Helmet {
private:
    int hp;
    int level;

public:
    void setHp(int hp) {
        this->hp = hp;
    }

    void setlevel(int level) {
        this->level = level;
    }

    int getHp() {
        return hp;
    }

    int getlevel() {
        return level;
    }
};

class player {
private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

public:
    int getHealth() {
        return health;
    }

    int getAge() {
        return age;
    }

    int getScore() {
        return score;
    }

    bool isAlive() {
        return alive;
    }

    Gun getGun() {
        return gun;
    }

    Helmet getHelmet() {
        return helmet;
    }

    void setHealth(int health) {
        this->health = health;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setScore(int score) {
        this->score = score;
    }

    void setisAlive(bool alive) {
        this->alive = alive;
    }

    void setgun(Gun gun) {
        this->gun = gun;
    }

    void setHelmet(int level) {
        Helmet newHelmet;
        newHelmet.setlevel(level);
        int health = 0;

        if (level == 1)
            health = 25;
        else if (level == 2)
            health = 50;
        else if (level == 3)
            health = 100;
        else {
            cout << "Error: Invalid level!" << endl;
            return;
        }

        newHelmet.setHp(health);
        this->helmet = newHelmet;
    }
};

int addScore(player a, player b) {
    return a.getScore() + b.getScore();
}

player getMaxScorePlayer(player a, player b) {
    return (a.getScore() > b.getScore()) ? a : b;
}

int main() {
    player harsh;
    player raghav;

    player* urvi = new player;

    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;

    player urviObject = *urvi;

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setisAlive(true);
    harsh.setHealth(70);
    harsh.setgun(akm);
    harsh.setHelmet(2);

    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;

    raghav.setAge(22);
    raghav.setScore(20);
    raghav.setisAlive(true);
    raghav.setHealth(100);
    raghav.setgun(awm);
    raghav.setHelmet(3);

    Gun gun123 = raghav.getGun();
    cout << gun123.damage << endl;
    cout << gun123.ammo << endl;
    cout << gun123.scope << endl;

    Helmet helmet123 = harsh.getHelmet();
    cout << helmet123.getHp() << endl;
    cout << helmet123.getlevel() << endl;
    

    cout << "Total Score: " << addScore(harsh, raghav) << endl;

    urviObject.setScore(40);
    urviObject.setAge(90);

    cout << "Urvi's Score: " << urviObject.getScore() << endl;

    player sanket = getMaxScorePlayer(harsh, raghav);
    cout << "Top Scorer's Score: " << sanket.getScore() << endl;
    cout << "Top Scorer's Age: " << sanket.getAge() << endl;
    cout << "Top Scorer's Health: " << sanket.getHealth() << endl;

    // delete urvi;

    player players[3] = {harsh, raghav, *urvi};
    cout << players[0].getAge();

    return 0;
}
