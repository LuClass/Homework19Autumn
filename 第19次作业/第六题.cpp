#include <string.h>
#include <iomanip>
using namespace std;
#include <iostream>
int getRev(char a[]){
	char *p=a;
	int sum=0;
	for(;*p!='\0';p++){
		char *q=p+1;
		for(;*q!='\0';q++)
		  if(*p>*q) sum+=1;
	}
	return sum;
}
#define MAX 3
main(){
	int n=MAX;
     char b[n][20];int c[n];
	 for(int i=0;i<n;i++)	cin>>b[i];
	 for(int i=0;i<n;i++)   c[i]=getRev(b[i]);
	 for(int i=0;i<n-1;i++)
	   for(int j=i+1;j<n;j++)
	       	if(c[i]>c[j]){
	       		int temp;
	       		char tmp[20];
	       		temp=c[i];
	       		c[i]=c[j];
	       		c[j]=temp;
	       		strcpy(tmp,b[i]);
	       		strcpy(b[i],b[j]);
	       		strcpy(b[j],tmp);
			   }
	 cout<<"ÄæÐòÊý£º"<<setw(5)<<"×Ö·û´®£º"<<endl;
	 for(int i=0;i<n;i++) cout<<c[i]<<setw(5)<<b[i]<<endl;
	 return 0;
}
