/*************************************************************************
	> File Name: friendclass.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Thu 02 Apr 2015 05:23:18 PM CST
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;

class Point {
	public:
		Point(int x=0, int y=0):x(x),y(y) {
			count++;
			cout<<"Point Count = "<<count<<endl;
		}
		Point(Point &p) {
			x = p.x;
			y = p.y;
			count++;
			cout<<"Point Count = "<<count<<endl;
		}
		~Point(){
			count--;
			cout<<"Point Count = "<<count<<endl;
		}
		int getX() {
			return x;
		}
		int getY() {
			return y;
		}
		static int count;
	private:
		int x, y;
};

int Point::count = 0;

int main(){ 
	Point myp1(1,2);
	Point myp2 = myp1;
	return 0;
}
