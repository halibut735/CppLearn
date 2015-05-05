#include <iostream>
using namespace std;
class Base{
	int a;
public:
	virtual void fun1() {cout<<"Base::fun1()"<<endl;}
	virtual void fun2() {cout<<"Base::fun2()"<<endl;}
	virtual void fun3() {cout<<"Base::fun3()"<<endl;}
};
class A:public Base{
	int a;
public:
	void fun1() {cout<<"A::fun1()"<<endl;}
	void fun2() {cout<<"A::fun2()"<<endl;}
};
void foo (Base& obj){
	obj.fun1();
	obj.fun2();
	obj.fun3();
}
int main(){
	Base b;
	A a;
	foo(b);
	foo(a);
}
