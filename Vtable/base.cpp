/*************************************************************************
	> File Name: base.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Thu 02 Apr 2015 03:04:17 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base2 {
	public:
		Base2(int j){
			cout<<"Constructing Base2 "<<j<<endl;
		}
		~Base2(){
			cout<<"Destructing Base2"<<endl;
		}
};
class Base1 {
	public:
		Base1(int i){
			cout<<"Constructing Base1 "<<i<<endl;
		}
		~Base1(){
			cout<<"Destructing Base1"<<endl;
		}
};


class Base3 {
	public:
		Base3(){
			cout<<"Constructing Base3 *"<<endl;
		}
		~Base3(){
			cout<<"Destructing Base3"<<endl;
		}
};

class Derived : public Base2, public Base1, public Base3{
	public:
		Derived(int a, int b, int c, int d):Base2(b),Base1(a),number1(c),number2(d){}
		~Derived(){
			cout<<"Destructing Derived"<<endl;
		}
	private:
		Base1 number1;
		Base2 number2;
		Base3 number3;
};

int main(){ 
	Derived obj(1,2,3,4);
    return 0;
}
