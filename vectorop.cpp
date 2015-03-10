/*************************************************************************
	> File Name: vectorop.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Tue 03 Mar 2015 10:03:22 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main(){ 
	string temp;
	vector<string> strvec;
	while(cin >> temp){
		strvec.push_back(temp);
	}
	for (auto & str : strvec){
		for (auto & c: str) c = toupper(c);
	}
	for (auto str : strvec){
		cout << str << endl;
	}
    return 0;
}
