/*************************************************************************
	> File Name: vectorsize.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Tue 03 Mar 2015 09:35:54 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main(){ 
	vector<int> v1,v2(10),v3(10,45),v4{10},v5{10,42};
	vector<string> v6{10},v7{10,"hi"};

	cout << v1.size() << endl
		 << v2.size() << endl
		 << v3.size() << endl
		 << v4.size() << endl
		 << v5.size() << endl
		 << v6.size() << endl
		 << v7.size() << endl;
    return 0;
}
