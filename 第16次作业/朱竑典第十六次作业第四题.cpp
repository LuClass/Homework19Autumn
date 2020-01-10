/*编写一个程序，先输入 n>2，再输入 n 个不同长度的字符串，然后对这些串进行多种计算。
  比如， 按串内容进行排序，计算每个串重复出现的次数，并按次数降序排序。
  要求不能假设 n 最大值，也不能按假 设每个串统一长度造成内存浪费。 */ 

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
#define N1 10
#define N2 20 
int main ( ){
	char  *a[N2];
	for (int i=0;i<N1;i++)
		cin>>a[i];
	const int num=sizeof(a)/sizeof(char*);
	sort (a,a+num,[](auto s1,auto s2){return strcmp(s1,s2)<0;});
	for (auto s:a)
		cout<<s<<endl;
	return 0;
} 
