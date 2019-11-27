#include<iostream>
#include<string.h>
using namespace std;
char a[10010];
int main(){
	int sum=0;
	cin>>a;
	int len=strlen(a);
	for(int i=0;i<len;i++){
		if(a[i]>='0'&&a[i]<='9'){
			sum++;
		}
	}
	cout<<"数字字符的个数："<<sum<<endl; 
} 
