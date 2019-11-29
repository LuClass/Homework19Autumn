#include <iostream>
#include <string.h>
using namespace std;
int main (){
	char a[100];
	char *p=&a[0];
	int b[50];
	int count;
    cout<<"输入一个字符串" <<endl;
	cin.getline(a,100);
	for(int j=0;*p!=0;){
	int mark=0;
	b[j]=0;
	for(;*p>=48&&*p<=57&&*p!=0;p++){
	b[j]=b[j]*10+*p-48;
    mark=1;
}
    if(mark==1)
    j++;
    if(mark==0)
    p++;
count=j;}
b[count]=*p;
cout<<"整数个数为"<<count<<endl;
int *q=&b[0];
for(;*q!=0;q++)
cout<<*q<<" ";
}

