/*************************************************************************
	> File Name: cmpstr.cpp
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Tue 03 Mar 2015 08:08:18 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	string word1,word2;
	cout << "Input two words to compare :";
	cin >> word1 >> word2;
	if (word1 > word2){
		cout << "\""<< word1 << "\" is bigger than \"" << word2 << "\"" << endl; 
	}else{
		cout << "\""<< word1 << "\" is not bigger than \"" << word2 << "\"" << endl; 
	}
}
