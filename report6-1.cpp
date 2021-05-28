#include<iostream>
using namespace std;

enum Week{sun = 0, mon = 1, tue = 2, wed = 3, thu = 4, fri = 5, sut = 6};

struct Date{
    int year;
    int month;
    int day;
};

Week GetWeek(const Date& d){
    int year,month,day;
    int Zeller;
    year = d.year;
    month = d.month;
    day = d.day;
    if(month == 1 || month == 2){
        month = month + 12;
        year = year - 1;
    }
    Zeller = year + (year/4) - (year/100) + (year/400) + (13*month+8)/5 + day;
    Week date = static_cast<Week>(Zeller%7);
    return date;
}

int main(void){
    Date date;
    cin >> date.year >> date.month >> date.day;
    switch(GetWeek(date)){
        case 0:
            cout << "Sunday" << endl;
            break;
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Suturday" << endl;
    }
}