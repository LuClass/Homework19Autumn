#include <iostream>
#include <string.h>
using namespace std;
struct NUM{
	int num;
	char *p1;
	int num2;
	
}; 
int NIXU(char *ss)
{
	char *sss;sss=ss;
	int count =0;
	while (*ss!=0)
	{
		sss=ss;
		while (*sss!=0)
		{if(ss<sss&&*ss>*sss)
		count ++;
		sss++;
	    }
	ss++;
	}
 return count;
}
void bubbleSort(NUM * c,int m)
{
	int temp1=0,temp3=0;char *temp2;
	for (int i=0;i<m-1;i++)
	{  for (int j=0;j<m-1-i;j++)
	   {
	    if (NIXU(c[j].p1)>NIXU(c[j+1].p1))
	        {
			temp1=c[j].num2;
	        c[j].num2=c[j+1].num2;
	        c[j+1].num2=temp1;
	        strcpy(temp2,c[j].p1);
	        strcpy(c[j].p1,c[j+1].p1);
	        strcpy(c[j+1].p1,temp2);
		    temp3=c[j].num;
	        c[j].num=c[j+1].num;
	        c[j+1].num=temp3;
	       }
	   }
    }
}   

void print(NUM *s,int n)
{
	cout<<n<<"in total\n";
	for (int i=0;i<n;i++)
	{
	cout<<s[i].num<<"----";
	
	  for (int j=0;j<s[i].num;j++)
	  {
	  	cout<<s[i].p1[j];
	  }
	//s[i].p1=
	s[i].num2=NIXU(s[i].p1);
	cout<<"-----"<<(s[i].num2);
	cout<<endl;
    }
}
void del(NUM *s,int n)
{
	for (int i=0;i<n;i++)
	   delete s[i].p1;
	delete[] s;
}
int main()
{
	int num=0;
	cin>>num;
	NUM * P=new NUM[num];
	for(int i=0;i<num;i++)
	{
		int number=0;
		cin>>number;
		cin.get();
		P[i].p1=new char [number];
		P[i].num=number;
		cin>>P[i].p1;
	}
	print (P,num);
	bubbleSort(P,num);
	cout<<"change-------"<<endl;
	print (P,num); 
    del (P,num);
}
