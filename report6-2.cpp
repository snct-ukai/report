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
	Zeller = year + (year / 4) - (year / 100) + (year / 400) + (13 * month + 8) / 5 + day;
	Week date = static_cast<Week>(Zeller % 7);
	return date;
}

void showCalender(Date d){
	d.day = 1;
	int week = static_cast<int>(GetWeek(d));
	for(int i = week; i > 0; i--){
	cout << "   ";
	}
	for(int i = 1; i <= 31; i++){
		if(!((week + i - 1) % 7)){
			cout << "\x1b[31m" << endl;
		}
		else if((week + i - 1) % 7 == 6){
			cout << "\x1b[34m";
		}
		cout << (i < 10 ? " " : "") << i << " " << "\x1b[m";
	}
	cout << endl;
}
int main(void){
	Date date;
	cin >> date.year >> date.month >> date.day;
	showCalender(date);
}