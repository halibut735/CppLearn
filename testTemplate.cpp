/*************************************************************************
	> File Name: test.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Sat 18 Apr 2015 08:26:50 PM CST
 ************************************************************************/

#include"Sales_item.h"
using namespace std;
template <typename T>
int compare(const T &v1, const T &v2){
	if(v1 < v2)return -1;
	if(v2 < v1)return 1;
	return 0;
}

int main(){ 
	Sales_item d1, d2;
	cin >> d1 >> d2;
	if(compare(d1,d2) == 1){
		cout<<"d1 is big"<<endl;
	}else if (compare(d1,d2) == -1){
		cout<<"d1 is small"<<endl;
	}else{
		cout<<"d1 equals d2"<<endl;
	}
	
    return 0;
}
