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
		void setTime(int newH = 0, int newM = 0, int newS = 0);
		void showTime();
	private:
		int hour, minute, second;
};

void Clock::setTime(int newH, int newM, int newS){
	hour = newH;
	minute = newM;
	second = newS;
}

inline void Clock::showTime(){
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}

int main(){ 
	Clock myclock;
	myclock.showTime();
	cout<<"First time set and output:";
	myclock.setTime();
	myclock.showTime();
	cout<<"Second time set and output:";
	myclock.setTime();
	myclock.showTime();
    return 0;
}
