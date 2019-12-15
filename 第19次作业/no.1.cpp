#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
void bubbleSort(int a[],char b[100][20],int n)
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
int getRev(char a[])
{
	char *s1=&a[0],*s2=&a[0];
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
int main()
{
	int num;
	cout<<"input MAX:\n";
	cin>>num;cin.ignore();
	const int MAX=num;char b[MAX][20];int c[MAX];
	for (int i=0;i<MAX;i++)
      {
	  cin.getline(b[i],20);
	  if(!cin)
	  {cin.clear();cin.ignore(1024,'\n');}
	  c[i]=getRev(b[i]);
	  }
    bubbleSort(c,b,MAX);
    for (int j=0;j<MAX;j++)
	cout<<setw(20)<<b[j]<<setw(5)<<c[j]<<endl; 
}
