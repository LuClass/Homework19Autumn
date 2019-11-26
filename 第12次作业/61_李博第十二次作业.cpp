#include<iostream>
using namespace std;
int getSet(int rs[],const int a[],int n)
{
 	int c=0,m; 
 	for(int i=0;i<n;i++)
	{ 
 	    m=1; 
 	    for(int j=0;j<c;j++) 
	        { 
 	            if(a[i]==rs[j]) 
 	            m=0;
            } 
 	    if(m==1) 
 	    rs[c++] = a[i];
    }
    cout<<"rs={";
	for(int i=0;i<c;i++)
 	    {
 	    	if(i==c-1)
 	            cout<<rs[i];
 	        else
 	            cout<<rs[i]<<",";
		}
    cout<<"}"<<endl;    
 	return c;
 }
void Num(int b[],int m[],int n,const int a[],int l)
{
 	for(int i=0;i<n;i++)
	{
 		int num=0;
 		for(int v=0;v<l;v++)
		{
 			if(b[i]==a[v])
 			num++;
 		}
 		m[i]=num;
 	}
}
void Down( int b[], int m[],int n)
{
 	int i,j,temp,x;
 	for(i=0;i<n-1;i++)
 	    for(j=0;j<n-1-i;j++)
 	        if(m[j]<m[j+1])
	{
 		temp=m[j];
 		m[j]=m[j+1];
 		m[j+1]=temp;
 		x=b[j];
 		b[j]=b[j+1];
 		b[j+1]=x;
 	}
}
void Output(int b[],int m[],int n)
{
 	for(int i=0;i<n;i++)
	{
 		cout<<b[i]<<":"<<m[i]<<'\n';
 	}
}
int main(){
 	int rs[8],m[8];
 	int a[8]={3,1,2,3,1,5,2,1};
 	int n=8,k;
 	k=getSet(rs,a,8);
 	Num(rs,m,k,a,8);
 	Down(rs,m,k);
 	Output(rs,m,k);
 	return 0;
 }
