#include<iostream>
using namespace std;

class Date{
public:
    int date;
    int month;
    int year;

public:
    Date(int d, int m, int y){
        date = d;
        month = m;
        year = y;
    }

    int getDate() const{
        return date;
    }

    int getMonth() const{
        return month;
    }

    int getYear() const{
        return year;
    }

    void setDate(int d){
        date = d;
    }

    void setMonth(int m){
        month = m;
    }

    void setYear(int y){
        year = y;
    }

    void compareDates(const Date & other) const{
        if(date == other.date && month == other.month && year == other.year){
            std::cout << "equal\n";
        }
        else{
            std::cout << "unequal\n";
        }
    }

};

int main(){
    Date date1(11, 3, 2024);
    Date date2(12, 5, 2025);

    date1.compareDates(date2);

    return 0;

}