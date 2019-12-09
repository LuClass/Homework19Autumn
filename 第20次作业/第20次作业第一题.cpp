#include<iostream>
#include<string.h>
using namespace std;
char*a[500];int b[500];
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
void bubbleSort(int a[500],char*b[500],int n)
{
	int temp1=0;
	char temp2[100];
	for (int i=0;i<n-1;i++)
	 for (int j=0;j<n-i-1;j++)
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
int max;int i;
cin>>max;
cin.get(); 
for(i=0;i<max;i++){
a[i]=new char[20];
cin.getline(a[i],20);  
if(!cin)
{cin.clear();cin.ignore(1024,'\n');}}
for(i=0;i<max;i++){
b[i]=getRev(a[i]);		
}
bubbleSort(b,a,max);


for(i=0;i<max;i++){
cout<<a[i]<<"  "<<b[i]<<endl;	
delete a[i];	
}	
}

