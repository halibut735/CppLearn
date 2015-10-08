/*************************************************************************
	> File Name: testvtable.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: 2015年05月06日 星期三 18时20分17秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
	public:
		virtual void f(){
			cout<<"Base::f()"<<endl;
		}
		virtual void g(){
			cout<<"Base::g()"<<endl;
		}
		virtual void h(){
			cout<<"Base::h()"<<endl;
		}
};

class Derived : public Base{
public:
	virtual void f1() {cout<<"Derived::f1()"<<endl;}
	virtual void g1() {cout<<"Derived::g1()"<<endl;}
	virtual void h1() {cout<<"Derived::h1()"<<endl;}
};

typedef void(*Fun)(void);

void* getp(void *p){
	return (void *)*(unsigned long *)p;
}

Fun getfun(Base *obj, unsigned long off){
	void *vptr = getp(obj);
	unsigned char *p = (unsigned char *)vptr;
	p += sizeof(void *) * off ;
	cout <<"the "<< off <<"th virtual pointer is "<<hex<<(unsigned long *)p<<endl;
	cout <<"the "<< off <<"th virtual function is 0x"<<hex<<(unsigned long)*(unsigned long *)p<<endl;
	return (Fun) getp(p);
} 

int main(){
	Base *p = new Derived();
	Fun f = NULL;
	int i,count = 0;
	//cin >> count;
	count = 3 + 3;
	for (i = 0; i < count; i++) {
		f = getfun(p,i);
		if(f != NULL)(*f)();
		else break;
	}
	return 0;	
}
