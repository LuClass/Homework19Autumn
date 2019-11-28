#include<iostream>
using namespace std;
bool num(char s1)
{if((s1<=57)&&(s1>=48))
return 1;
else
return 0;	
}


int skip(char s1[],int n){
while(num(s1[n])==1)	
{n++;
	}	
return n;	
	
}


int main(){
char*s1;int n=0;int c=0;int k,a;int b[500];	
cin>>s1;
while(s1[n]!=0){
if(num(s1[n])==1)
{k=n;
a=n=skip(s1,n);
b[c]=0;
for(k;k<a;k++)
{
b[c]=b[c]*10+s1[k]-48;}
c++;
}			
else
n++;	
	
}
cout<<"有"<<c<<"个整数"<<endl;	
for(a=0;a<c;a++){
cout<<b[a]<<endl;	
}	
	
	
	
	
}
