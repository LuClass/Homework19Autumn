#include<iostream>
#include<string.h>
using namespace std;
void bubbleSort(char * strs[], int n){
	char *temp;
	for(int i = 0; i < n-1; i++)
		for(int j = 0; j < n-i-1; j++)
			if(strcmp(strs[j], strs[j+1]) > 0){
				temp = strs[j];
				strs[j] = strs[j+1];
				strs[j+1] = temp;
			}
	for(int i=0;i<n;i++)
		cout<<strs[i]<<endl;
}

void countAndSort(char * strs[],int n){
	int b[10],k=1,t;
	bool f=0;
	char * s1[10],*temp;
	s1[0]=strs[0];
	b[0]=1;
	for(int i=1;i<n;i++){
		for(int j=0;j<k;j++){
			if(strcmp(strs[i],s1[j])==0){
				b[j]++;
				f=1;
				break;
			}
		}
		if(f) {
			f=0;
			continue;
		}
		s1[k]=strs[i];
		b[k]=1;
		k++;
		f=0;
	}
	for(int i=0;i<k-1;i++)
		for(int j=0;j<k-i-1;j++){
			if(b[j]<b[j+1]){
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
				temp=s1[j];
				s1[j]=s1[j+1];
				s1[j+1]=temp;
			}
		}
	for(int i=0;i<k;i++){
		cout<<s1[i]<<'\t'<<b[i]<<endl;
	}
}
int main()
{
	int n;
	char * s[10],ss[10][20];
	cout<<"待输入的字符串个数n(2<n<11)=";
	cin>>n;
	cin.get();
	cout<<"输入字符串（每串长度不超过20）："<<endl;
	for(int i=0;i<n;i++)
	{
		cin.getline(ss[i],20);
		s[i]=ss[i];
	}
	cout<<endl;
	bubbleSort(s,n);
	cout<<endl;
	countAndSort(s,n);
	return 0;
}


