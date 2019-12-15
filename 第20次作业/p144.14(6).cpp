#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int i,j,temp;
	int max;
	char x[10000][20];
	char y[20];
	int getRev(char a[]);
	int n[10000];
	cout<<"请输入字符串的行数max = ";
	cin>>max; 
	cout<<"在下面的max行中输入字符串，每个字符串大小不超过20"<<endl;
	for(i=0;i<=max-1;i++){
		cin.getline(x[i], 20);
		n[i]=getRev(x[i]);
	}
	for(i = 0; i < max-1; i++)
		for(j = 0; j <max-1-i; j++)
			if(n[j] > n[j+1]){
				temp = n[j]; 
				n[j] = n[j+1]; 
				n[j+1] = temp;
				strcpy(y,x[j]);
				strcpy(x[j],x[j+1]);
				strcpy(x[j+1],y);
			}
	for(i=0;i<=max-1;i++){
		cout<<x[i]<<":"<<n[i]<<endl;
	}
} 
int getRev(char a[]){
	int n,i,j,count=0;
	n=strlen(a);
	for(i=0;i<=n-1;i++){
		for(j=i+1;j<=n-1;j++){
			if(a[i]>a[j]){
				count++;
			}
		}
	}
	return count;
} 
