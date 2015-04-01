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
		Clock(Clock &clock);
		void setTime(int newH = 0, int newM = 0, int newS = 0);
		void showTime();
	private:
		int hour, minute, second;
};

Clock::Clock(int newH, int newM, int newS){
	hour = newH;
	minute = newM;
	second = newS;
	cout<<"call init function!"<<endl;
}

Clock::Clock(Clock &clock){
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

int main(){ 
	Clock myclock(10,22,00);
	myclock.showTime();
	cout<<"First time set and output:";
	myclock.setTime();
	myclock.showTime();
	cout<<"Second time set and output:";
	myclock.setTime(10,22,30);
	myclock.showTime();
    return 0;
}
