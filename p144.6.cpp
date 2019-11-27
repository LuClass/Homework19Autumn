using namespace std;
#include<iostream>
#include<string.h>
#define max 3
int getrev(char a[])
{
	int sum=0;
    for(int i=0;i<19;i++)
    {
    	
    	int j;
    	j=i;
	    if(a[i+1]==0)
	    break;
    	for(;j<20;j++)
    	{	
		    if(a[j]==0)
		    break;
    	   	if(a[i]>a[j])
            {
            	sum+=1;
            }
    	}
    }
    return sum;
	 
}
int main()
{
	int temp;
	int b[max];
	char a[max][20],temp1[20];
	for(int i=0;i<max;i++)
	{
        cin.getline(a[i],20);
    }  
    for(int j=0;j<max;j++)
    {
    	b[j]=getrev(a[j]);
    }
    for(int m=0;m<max-1;m++)
    {
    	for(int n=0;n<max-1-m;n++)
    	{
    		if(b[n]>b[n+1])
    		{
    		
    		   temp=b[n];
			   b[n]=b[n+1];
			   b[n+1]=temp;
			   strcpy(temp1,a[n]);
			   strcpy(a[n],a[n+1]);	
			   strcpy(a[n+1],temp1);
    		}
    	}
    }
    for(int k=0;k<max;k++)
    {
    	cout<<a[k]<<"      "<<b[k]<<endl;
    }
	return 0;
}
