#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
void bubble(char *c1[],int n)
{
	char *swap1;
	for(int i = 0; i < n-1; i++)				
		for(int j = 0; j < n-i-1; j++)
			if(strcmp(c1[j], c1[j+1]) > 0)
			{
				swap1 = c1[j];				
				c1[j] = c1[j+1];
				c1[j+1] = swap1;
			}
}
void bubble(char *c1[],int samenum[],int n)
{
	char *swap2;
	int k;
	for(int ii = 0; ii < n-1; ii++)				
		for(int jj = 0; jj < n-ii-1; jj++)
			if(samenum[jj]>samenum[jj+1])
			{
				k = samenum[jj];				
				samenum[jj] = samenum[jj+1];
				samenum[jj+1] = k;
				swap2=c1[jj];
				c1[jj]=c1[jj+1];
				c1[jj+1]=swap2;
			}
}
void cycle(char *c1[],int n)
{
	int samenum[10];
	for (int type=0;type<n;type++)
	samenum[type]=1;

	for (int t1=0;t1<n-1;t1++)
	{
		
	 for (int t2=n-1;t2>t1;t2--)
	 {
	 	
	 	if(strcmp(c1[t1],c1[t2])==0&&t1!=t2)
	 	{
		 samenum[t1]++;
		 samenum[t2]++;

	    }
	 }
    }
bubble(c1,samenum,n);
for (int t=n-1;t>=0;t--)
{
	cout<<setw(10)<<c1[t]<<setw(10)<<samenum[t]<<endl;
}
}
int main()
{
	char c[10][20];
 	char* c1[]={c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7],c[8],c[9]};
 	int n;
 	cin>>n;
 	cin.get();
 	//cin.getline(c[9],20);
	for (int x=0;x<n;x++)
 	{
 		cin.getline(c[x],20);
 		if(!cin)
 		cin.clear();
 		cin.ignore(1024,'\n');
 	}
    cout<<endl;
 	bubble(c1,n);
 	for (int w=0;w<n;w++)
 	cout<<setw(10)<<c1[w]<<endl;
 	cout<<endl;
 	cycle(c1,n);
}
