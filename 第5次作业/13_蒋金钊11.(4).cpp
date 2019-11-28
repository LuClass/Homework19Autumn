#include<iostream>
using namespace std;
int main(void){
	int count = 0;
	char a;
	while(1){
		
		a = cin.get();
		if(a==10) break;
		if(a>=48&&a<=57) count++;
		
	}
	cout<<"输入字符串中的数组字符个数为:"<<count<<endl;
	return 0;
} 
