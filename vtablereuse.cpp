/*************************************************************************
	> File Name: testvtable.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: 2015年05月06日 星期三 18时20分17秒
 ************************************************************************/
#include<stdlib.h>
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

typedef void(*Fun)(void);

void test(){
	cout<<"Vtable Hijack"<<endl;
}

long a[3] = {(long)test,(long)test,(long)test};

int main(){
	Base b;
	long **vtab = (long **)&b;
	cout<<"&vtable = "<<&vtab<<endl;
	cout<<"vtable  = "<<vtab<<endl;
	cout<<&(vtab[0])   <<" | "<<vtab[0]           <<endl;
	cout<<&(vtab[0][0])<<" | "<<(long *)vtab[0][0]<<endl;
	cout<<&(vtab[0][1])<<" | "<<(long *)vtab[0][1]<<endl;
	cout<<&(vtab[0][2])<<" | "<<(long *)vtab[0][2]<<endl;
	cout<<&(vtab[1])   <<" | "<<vtab[1]           <<endl;
	cout<<vtab[0][3]<<endl;
	
	Fun pFun = (Fun)vtab[0][0];
	pFun();

	vtab[0] = a;
	cout<<"after vtable reuse "<<endl;
	cout<<&(vtab[0][0])<<" | "<<(long *)vtab[0][0]<<endl;
	cout<<&(vtab[0][1])<<" | "<<(long *)vtab[0][1]<<endl;
	cout<<&(vtab[0][2])<<" | "<<(long *)vtab[0][2]<<endl;
	
	Fun pFun = (Fun)vtab[0][0];
	pFun();
	b.f();
	system("cat /proc/self/maps");
	return 0;
}
