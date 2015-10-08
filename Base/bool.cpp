/*************************************************************************
	> File Name: bool.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: 2015年05月01日 星期五 15时16分58秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){ 
	int i = 0, j = 0, k = 1;
	bool b1 = (i != j < k), b2 = (i != j && j < k);
	cout << b1 << b2 << endl;
	if (i = k) {
		cout<<"bool test!"<<endl;
	}
    return 0;
}
