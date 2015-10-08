/*************************************************************************
	> File Name: mytest.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: 2015年05月01日 星期五 16时02分45秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main(){ 
	vector<int> v = {1,2,3,4,5,6,7,8,9,10};
	cout<<v.size()<<endl;
	auto pbeg = v.begin();
	while(pbeg != v.end() && *pbeg >= 0){
		cout<<*pbeg++<<endl;
	}
	cout<<"--------------------------"<<endl;
	pbeg = v.begin();
	while(pbeg != v.end() && *pbeg >= 0){
		cout<<*++pbeg<<endl;
	}
    return 0;
}
