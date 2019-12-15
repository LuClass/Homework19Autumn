
#include<iostream>
#include<string.h>
#include <iomanip>
using namespace std;
void sort(char *str[],int n)
{
	char *temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++){
			if(strcmp(str[j],str[j+1])>0){
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
}
void count(char *str[],int s[],int n)
{
	for(int i=0;i<n;i++)
	{
		s[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(strcmp(str[i],str[j])==0)
			{
				s[i]+=1;
		     	}
		    }
       	}
	char *temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(s[j]<s[j+1])
			{
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
	cout<<"请输入串数 n"<<endl;
	cin>>n;
	cout<<"请输入字符串"<<endl;	
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
