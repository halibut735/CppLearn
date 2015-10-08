/*************************************************************************
	> File Name: test.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Sun 12 Oct 2014 04:37:09 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
	string word;
	while (getline(cin,word)){
		cout << word << endl;
		cout << word << " size : " << word.size() << endl;
	}
	return 0;
}
