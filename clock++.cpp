/*************************************************************************
	> File Name: clock++.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Fri 03 Apr 2015 10:07:52 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Clock {
	public :
		Clock(int hour=0, int minute=0, int second=0);
		void showTime() const;
		Clock& operator++();
		Clock operator++(int);
	private:
		int hour, minute, second;
};

Clock::Clock(int hour, int minute, int second){
	if(0<=hour && hour <24 && 0<=minute && minute<60 
			&& 0<=second && second<60){
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}else{
		cout<<"Clock init fails......"<<endl;
	}
}

void Clock::showTime() const{
	cout<<"Time is "<<hour<<":"<<minute<<":"<<second<<endl;
}

Clock& Clock::operator++(){
	second++;
	if(second >= 60){
		second -= 60;
		minute++;
		if(minute >=60){
			minute -= 60;
			hour = (hour+1)%24;
		}
	}
	return *this;
}

Clock Clock::operator++(int ){
	Clock old = *this;
	++(*this);
	return old;
}

int main(){ 
	Clock myclock(23,59,59);
	myclock.showTime();
	(myclock++).showTime();
	(++myclock).showTime();
    return 0;
}
