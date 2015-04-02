/*************************************************************************
	> File Name: clock.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Tue 31 Mar 2015 08:46:14 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Clock{
	public:
		Clock(int newH = 0, int newM = 0, int newS = 0);
		Clock(const Clock &clock);
		void setTime(int newH = 0, int newM = 0, int newS = 0);
		void showTime();
		int getHour();
		int getMinute();
		int getSecond();
	private:
		int hour, minute, second;
};

Clock::Clock(int newH, int newM, int newS){
	hour = newH;
	minute = newM;
	second = newS;
	cout<<"call init function!"<<endl;
}

Clock::Clock(const Clock &clock){
	hour = clock.hour;
	minute = clock.minute;
	second = clock.second;
	cout<<"call dumplicate init function!"<<endl;
}

void Clock::setTime(int newH, int newM, int newS){
	hour = newH;
	minute = newM;
	second = newS;
}

inline void Clock::showTime(){
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}

inline int Clock::getHour(){
	return hour;
} 

inline int Clock::getMinute(){
	return minute;
} 

inline int Clock::getSecond(){
	return second;
} 

bool isAm(Clock c){ //require 24 hour 
	return (c.getHour() < 12);
}

Clock create(){
	Clock c(1,2,3);
	return c;
}

int main(){ 
	Clock myclock(10,22,00);
	myclock.showTime();
	cout<<"First time set and output:";
	myclock.setTime();
	myclock.showTime();
	cout<<"Second time set and output:";
	myclock.setTime(10,22,30);
	myclock.showTime();

	//show how the dumplicate init function runs
	//1st classification
	Clock dump(myclock);
	dump.showTime();
	Clock twodump = dump;
	twodump.showTime();
	
	//2nd classification
	if (isAm(dump)){
		cout<<"This time is am!"<<endl;
	}
	//3rd classification
	Clock ct = create();
	ct.showTime();
    return 0;
}
