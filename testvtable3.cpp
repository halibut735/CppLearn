/*************************************************************************
	> File Name: testvtable.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: 2015年05月06日 星期三 18时20分17秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Base1{
	public:
		virtual void f(){
			cout<<"Base1::f()"<<endl;
		}
		virtual void g(){
			cout<<"Base1::g()"<<endl;
		}
		virtual void h(){
			cout<<"Base1::h()"<<endl;
		}
};

class Base2{
	public:
		virtual void f(){
			cout<<"Base2::f()"<<endl;
		}
		virtual void g(){
			cout<<"Base2::g()"<<endl;
		}
		virtual void h(){
			cout<<"Base2::h()"<<endl;
		}
};

class Base3{
	public:
		virtual void f(){
			cout<<"Base3::f()"<<endl;
		}
		virtual void g(){
			cout<<"Base3::g()"<<endl;
		}
		virtual void h(){
			cout<<"Base3::h()"<<endl;
		}
};
class Derived : public Base1,public Base2,public Base3{
public:
	virtual void f1() {cout<<"Derived::f1()"<<endl;}
	virtual void g1() {cout<<"Derived::g1()"<<endl;}
	virtual void h1() {cout<<"Derived::h1()"<<endl;}
};

typedef void(*Fun)(void);

void* getp(void *p){
	return (void *)*(unsigned long *)p;
}

Fun getfun(Derived *obj, unsigned long off){
	void *vptr = getp(obj);
	unsigned char *p = (unsigned char *)vptr;
	p += sizeof(void *) * off ;
	cout <<"the "<< off <<"th virtual pointer is "<<hex<<(unsigned long *)p<<endl;
	cout <<"the "<< off <<"th virtual function is 0x"<<hex<<(unsigned long)*(unsigned long *)p<<endl;
	return (Fun) getp(p);
} 

int main(){
	Derived *v = NULL,*p = new Derived();
	Fun f = NULL;
	const int outcount = 3;
	int count[] = {6,3,3};
	for (int j = 0; j < outcount; j++) {
		v = (Derived *)((char *)p + j* sizeof(void *));
		cout <<"vtable pointer is "<<hex<<(unsigned long *)v<<endl;
		for (int i = 0; i < count[j]; i++) {
			f = getfun(v,i);
			(*f)();
		}
	}
	return 0;	
}
