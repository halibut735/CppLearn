/*************************************************************************
	> File Name: test.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: 2015年05月01日 星期五 20时44分04秒
 ************************************************************************/

#include<iostream>
#include<typeinfo>
using namespace std;
int main(){ 
	int ival = 10;
	cout << typeid(double).name() << " " << typeid(float).name() <<endl;
	cout << typeid(ival*1.0).name() <<endl;
    return 0;
}
