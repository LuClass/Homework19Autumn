#include<iostream>
#include<string.h>
using namespace std;
#define MAX 5
int getRev(char*a){char *s1=&a[0],*s2=&a[0];
	int count=0;
	while(*s1!=0)
	{
		s2=s1;
		while(*s2!=0)
		{ if(*s1>*s2)
		  count++;
		  s2++;
	    }
		s1++;
	}
return count;	
}
void bubbleSort(int a[MAX],char*b[MAX])
{
	int temp1=0;
	char temp2[100];
	for (int i=0;i<MAX-1;i++)
	 for (int j=0;j<MAX-i-1;j++)
	 {
	 	if(a[j]>a[j+1]){
	 		temp1=a[j];
	 		a[j]=a[j+1];
	 		a[j+1]=temp1;
	 		strcpy(temp2,b[j]);
	 		strcpy(b[j],b[j+1]);
	 		strcpy(b[j+1],temp2);}
	 }
}


int main(){
char*a[MAX];int b[MAX];
int i;
for(i=0;i<MAX;i++){
a[i]=new char[20];
cin.getline(a[i],20);  
if(!cin)
{cin.clear();cin.ignore(1024,'\n');}}
for(i=0;i<MAX;i++){
b[i]=getRev(a[i]);		
}
bubbleSort(b,a);


for(i=0;i<MAX;i++){
cout<<a[i]<<"  "<<b[i]<<endl;	
delete a[i];	
}	
}

