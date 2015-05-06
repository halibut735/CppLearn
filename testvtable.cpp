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
			cout<<"Base::f"<<endl;
		}
		virtual void g(){
			cout<<"Base::g"<<endl;
		}
		virtual void h(){
			cout<<"Base::h"<<endl;
		}
};

typedef void(*Fun)(void);

int main(){ 
	Base b;
	Fun pFun = NULL;
	cout << "虚函数地址："<<(int *)(&b)<<endl;
	cout << "虚函数-第一个函数地址："<<(int *)*(int *)(&b) <<endl;

	pFun = (Fun)*(int *)*(int *)(&b);
	pFun();
	return 0;
}
