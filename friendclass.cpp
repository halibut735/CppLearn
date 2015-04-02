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
		Point(int x=0, int y=0):x(x),y(y) {}
		int getX() const {
			return x;
		}
		int getY() const {
			return y;
		}
		friend float distance(const Point &p1, const Point &p2);
	private:
		int x, y;
};

float distance(const Point &p1, const Point &p2) {
	double x = p1.x - p2.x;
	double y = p1.y - p2.y;
	return static_cast<float> (sqrt(x * x + y * y));
}
int main(){ 
	const Point myp1(1,2),myp2(4,6);
	cout<<"The x is "<<myp1.getX()<<endl;
	cout<<"The y is "<<myp1.getY()<<endl;
	cout<<"The distance of myp1 and myp2 is "<<distance(myp1,myp2)<<endl;
	return 0;
}
