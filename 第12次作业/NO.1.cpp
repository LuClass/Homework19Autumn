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
	int j=0;	
	for (int num1=0;num1<n-1;num1++)
	{
		int num2=num1+1;
		if (a[num1]!=a[num2]){
		rs[j]=a[num1];
		j++;
	    }
	}
	for (int k=0;k<j;k++)
	{
	cout<<rs[k]<<" ";
	}
	cout<<a[n-1];
	cout<<endl;
}
int main()
{
	int temp;
	cout<<"please input the number of the group\n";
	cin>>n;
	cout<<"please input numbers\n";
	for (int i=0;i<n;i++)
	{
		cin>>temp;
		a[i]=temp;
	}
    bubbleSort(a,n);
    getSet(a,n);
}
