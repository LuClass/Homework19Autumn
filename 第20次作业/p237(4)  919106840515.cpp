#include<iostream>
#include<string.h>
using namespace std;
struct NP
{
	char *rp;
};
void bubblesort(NP *table,int n)
{
	int i,j;char *temp;
	for(i=0;i<n;i++)
   {  
     for(j=0;j<n-1-i;j++)
	 {
		if(strcmp(table[j].rp,table[j+1].rp)>0)
		{
		 temp=table[j].rp;
		 table[j].rp=table[j+1].rp;
		 table[j+1].rp=temp;
		}
	 }
   }
  cout<<"按字典排序:"<<endl;
  for(i=0;i<n;i++)
  cout<<table[i].rp<<endl;
}
void num(NP *table,int n)
{
     int t,i,j;
     int b[n];
     for (i=0;i<n;i++)
	 {b[i]=0;}  
     char *r;
	  for(i=0;i<n;i++)
     {      
	       for(j=0;j<n;j++)
       	{
	       if(strcmp(table[i].rp,table[j].rp)==0)
	       b[i]++;
        }
	 }	
	  for(i=0;i<n;i++)
	{
	  	 for(j=0;j<n-i-1;j++)
	  {
	 	if(b[j]<b[j+1])
	 	{
	 		t=b[j];
	 		b[j]=b[j+1];
	 		b[j+1]=t;
	 		r=table[i].rp;
	 		table[i].rp=table[i+1].rp;
	 		table[i+1].rp=r;
		}
	  }
	}
	 cout<<"按次数降序排列:"<<endl;
     for(i=0;i<n;i++)
     cout<<table[i].rp<<" : "<<b[i]<<endl;
}
void del(NP *t, int row){
	 for(int i = 0; i < row; i++){
		delete [] t[i].rp;
	}
	 delete []t;
}
int main()
{
	 int n,i,j;
	 cout<<"输入n：";
	 cin>>n;
	 NP * table=new NP[n];
	 for(i=0;i<n;i++)
	{
		table[i].rp=new char[20];
		cin>>table[i].rp;
	}
     bubblesort(table,n);
     num(table,n);
     del(table,n);
	 return 0;
}
