#include <iostream>
using namespace std;
int a[500];int n;
void bubbleSort(int data[],int n)
{
	int i,j,temp;
	for (i=0;i<n-1;i++)
	for (j=0;j<n-1-i;j++)
	if (data[j]>data[j+1])
    {
    	temp=data[j];
    	data[j]=data[j+1];
    	data[j+1]=temp;
	}		
}
int getSet(int s[],int n)
{
	int rs[500];int m;
	int rs1[500];int m1;
	int j=0;	
	for (int x1=0;x1<n;x1++)
	{
		rs1[x1]=1;
	}
	for (int num1=0;num1<n-1;num1++)
	{
		int num2=num1+1;
		if(a[num1]==a[num2]){
			rs1[j]++;
		}
		if (a[num1]!=a[num2]){
		rs[j]=a[num1];
		j++;
	    }
        if (num2==n-1&&a[num1]==a[num2])
		{
	    	while (a[num2]==a[num1])
			{
	    		rs1[j]+=1;
	    		num1--;
			}
			rs1[j]-=1;
	    	break;
		}
	}
	for (int k=0;k<j;k++)
	{
		cout<<rs[k]<<" ";
		cout<<rs1[k]<<" ";
		cout<<endl;
	}
	    cout<<a[n-1]<<" ";
	    cout<<rs1[j]<<endl;
	cout<<endl;
}
int main()
{
    int temp;
    cout<<"please input the number of the group\n";
	cin>>n;
	cout<<"please input numbers:\n";
	for (int i=0;i<n;i++)
	{
		cin>>temp;
		a[i]=temp;
	}
    bubbleSort(a,n);
    getSet(a,n);
}
