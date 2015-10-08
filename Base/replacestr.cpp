/*************************************************************************
	> File Name: replacestr.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Tue 03 Mar 2015 08:52:31 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){ 
	string str("Test String");
	for(auto &s : str){
		s = toupper(s);
	}
	for(auto s : str){
		cout << s <<endl;
	}
	for (unsigned int i = 0; i < str.size(); i++ ){
		str[i] = 'X'; 
	}
    return 0;
}
