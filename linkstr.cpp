/*************************************************************************
	> File Name: linkstr.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Tue 03 Mar 2015 08:34:31 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	string str,temp;
	while(cin >> temp){
		str += temp + " ";
		cout << str << endl; 
	}
	return 0;
}
