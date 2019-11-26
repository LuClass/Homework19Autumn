using namespace std;
#include <iostream>
#include <string.h>
#include <stdlib.h>
void sum(char *s[],int res[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int u=0;u<i;u++)  //后面相同字符串赋出现次数值 
		{
			if(strcmp(s[u],s[i])==0)
			{
				res[i]=res[u];
				i++;
				break;
			}
		}		
		for(int j=i+1;j<n;j++) //出现次数 
		{
			if(strcmp(s[i],s[j])==0)
			{
				res[i]=res[i]+1;
			}
		}
	}
	char *temp;
	int res1;
	for(int l=0;l<n-1;l++) //冒泡排序 
	{
		for(int m=0;m<n-1-l;m++)
		{
			if(res[m]>res[m+1])
			{
				temp = s[m];			
				s[m] = s[m+1];
				s[m+1] = temp;
				res1 = res[m];			
				res[m] = res[m+1];
				res[m+1] = res1;				
			}
		}
	}
}
int main()
{
	int n;
	while(cin>>n)
	{
	    int word;
		int res[n];
	    for(int l=0;l<n;l++)
	    {
		    res[l]=1;
	    }
		char *s1[20];
	    for(int i=0;i<n;i++)
	    {
		    s1[i]=(char*)malloc(sizeof(char)*21);
			cin>>s1[i];
	    }
		sum(s1,res,n);
	    for(int j=n-1;j>=0;j--)
	    {
			word=1;
			for(int k=n-1;k>j;k--)
			{
				if(strcmp(s1[k],s1[j])==0)
				{
					word=0;
					break;
				}
			}
			if(word==0)
			{
				continue;
			}		    
			cout<<s1[j]<<" "<<res[j]<<endl;
	    }	
	}
    return 0;
}
