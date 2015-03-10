/*************************************************************************
	> File Name: test.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Sun 12 Oct 2014 04:37:09 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
	vector<int> ivec{10,1};
	for(int i =0 ; i < ivec.size() ; i++){
		cout<<"ivec["<<i<<"] is "<<ivec[i]<<endl;
	}
	return 0;
}
