#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char *str,s[100];
	int b[50],x=0,len,t=1;
	cin.getline(s,100);
	str=s;
	len=strlen(s);
	for(int i=0;i<len;i++){
		if(*(str+i)>'0'&&*(str+i)<='9'){
			int j=i+1;
			for(;j<len;j++){
				if(*(str+j)<'0'||*(str+j)>'9')
				break;
			}
			b[x]=0;
			for(int k=j-1;k>=i;k--){
				b[x]+=(*(str+k)-'0')*t;
				t*=10;
			}
			x++;
			t=1;
			i=j;
		}
	}
	cout<<"ÕûÊýÓÐ"<<x<<"¸ö,·Ö±ðÊÇ£º"<<endl;
	for(int i=0;i<x;i++)
	cout<<b[i]<<'\t';
}
