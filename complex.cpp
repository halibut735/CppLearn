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
		Complex operator+(const Complex &c2) const;
		Complex operator-(const Complex &c2) const;
		void display() const;

	private:
		double real;
		double image;
};

Complex Complex::operator+(const Complex &c2) const{
	return Complex(real+c2.real,image+c2.image);
}


Complex Complex::operator-(const Complex &c2)const {
	return Complex(real-c2.real,image-c2.image);
}

void Complex::display() const{
	cout<<"complex("<<real<<","<<image<<")"<<endl;
}
int main(){ 
	Complex c1(4,5),c2(2,10),c3;
	c1.display();
	c2.display();
	c3.display();
	c3 = c1 + c2;
	c3.display();
	c3 = c1 - c2;
	c3.display();
    return 0;
}
