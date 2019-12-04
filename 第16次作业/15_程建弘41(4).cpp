/*
(4)编写一个程序， 先输入 n>2， 再输入 n 个不同长度的字符串，然后对这些串进行多种计算。 比如，
按串内容进行排序，计算每个串重复出现的次数，并按次数降序排序。 要求不能假设 n 最大值，也不能按假
设每个串统一长度造成内存浪费。
*/
#include<iostream>
#include<string.h>
#include <iomanip>
using namespace std;
void sort(char *str[],int n){
	char *temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(str[j],str[j+1])>0){
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
}
void count(char *str[],int s[],int n){
	for(int i=0;i<n;i++){
		s[i]=0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(strcmp(str[i],str[j])==0){
				s[i]+=1;
			}
		}
	}
	char *temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(s[j]<s[j+1]){
				int mm=s[j];
				s[j]=s[j+1];
				s[j+1]=mm;	
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}	
}

int main(){
	int n;
	cout<<"请输入要计算的串数 n"<<endl;
	cin>>n;
	cout<<"请输入要计算的字符串"<<endl;	
	char str[10][20];
	char *p1[n];
	for(int i=0;i<n;i++){
		cin>>str[i];
		p1[i]=str[i];
	}
	///////////////////////////	
	cout<<"按串内容进行排序结果："<<endl;
	sort(p1,n);
	for(int i=0;i<n;i++){
		cout<<p1[i]<<endl;
	}
	//////////////////////////
	cout<<"按串重复次数降序结果："<<endl;
	cout<<"字符串\t\t\t"<<"次数"<<endl;	
	int s[10];
	count(p1,s,n);
	for(int i=0;i<n;i++){
		if(strcmp(p1[i],p1[i+1])==0){
			i++;		
		}
		cout<<p1[i]<<"\t\t\t"<<s[i]<<endl;		
	}
	

}
/*
6
qwe
sda
qw
qw
dsgdsg
sa
*/ 

