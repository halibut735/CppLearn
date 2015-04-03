/*************************************************************************
	> File Name: polymiorphism.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Thu 02 Apr 2015 09:11:27 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Complex {
	public:
		Complex(double r=0.0, double i=0.0):real(r),image(i){}
		friend Complex operator+(const Complex &c1, const Complex &c2);
		friend Complex operator-(const Complex &c1, const Complex &c2);
		friend ostream & operator<<(ostream &out, const Complex &c2);

	private:
		double real;
		double image;
};

Complex operator+(const Complex &c1, const Complex &c2){
	return Complex(c1.real+c2.real,c1.image+c2.image);
}


Complex operator-(const Complex &c1, const Complex &c2) {
	return Complex(c1.real-c2.real,c1.image-c2.image);
}

ostream& operator<<(ostream &out, const Complex &c){
	out<<"Complex("<<c.real<<","<<c.image<<")";
	return out;
}
int main(){ 
	Complex c1(4,5),c2(2,10),c3;
	cout<<c1<<endl;
	cout<<c2<<endl;
	c3 = c1 + c2;
	cout<<c3<<endl;
	c3 = c1 - c2;
	cout<<c3<<endl;
    return 0;
}
