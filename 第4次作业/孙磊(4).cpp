//第四次作业 2019.10.11
//(4) 
#include<iostream>
using namespace std;
int main()
{
	char ch=0;
	int count=0;
	cout<<"输入字符串："; 
	do{
	ch = cin.get();//获取字符 
	if(ch>='0'&&ch<='9')//数字范围 
	 count++;
	}while(ch!='\n');//循环条件 
	 cout<<"数字数量为："<<count<<endl; 
	 return 0;
 } 
