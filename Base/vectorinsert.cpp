/*************************************************************************
	> File Name: vectorinsert.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Mon 27 Apr 2015 07:57:01 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(){ 
	vector<int> vectofint;
	int tmp;
	for (int i = 0; i < 10; i++) {
		cin >> tmp;
		vectofint.push_back(tmp);
	}
	for(auto it = vectofint.begin();it != vectofint.end();it++){
		(*it) = (*it) << 1;
	}
	
	for(auto it = vectofint.begin();it != vectofint.end() && !vectofint.empty();it++){
		cout << (*it) << endl;
	}
    return 0;
}
