/*************************************************************************
	> File Name: cast-name.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: 2015年05月01日 星期五 21时43分13秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){ 
	const string *ps;
	void *pv;
	int i;
	double d;
	char *pc;
	pv = const_cast<string *>(ps);
	pv = static_cast<void *>(const_cast<string *>(ps));
	i = int(*pc);
	pv = &d;
	pc = (char *)pv;
    return 0;
}
