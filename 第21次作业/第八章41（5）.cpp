using namespace std;
#include <iostream>
#include <string.h>
int main()
{
    char p[50];
 	cin.getline(p,50);
	int n=0,key=0;
	int m=strlen(p);
	for(int i=0;i<m;i++)
	{
		if(p[i]>='0'&&p[i]<='9')
 		{
 			if(key==0)
 			{
 				key=1;
 				n++;
 				continue;	
 			}
 			else			
 				continue;		
 		}
 		else
 			key=0;	
	}
	int *num=new int[n];
	int k=0,count=0;
	for(int i=0;i<=m;i++)
	{
		if(p[i]>='0'&&p[i]<='9')
		{
			if(key==0)
			{
				key=1;
				k=k*10+(p[i]-48);
				continue;
			}
			else
			{
				k=k*10+(p[i]-48);
			}
		}
		else
		{
			if(k)
			{
				num[count]=k;
				count++;
			}
			k=0;
			key=0;
		}
	}
	for(int y=0;y<n;y++)
 		cout<<num[y]<<endl;
 	delete num;
 	return 0;
}
