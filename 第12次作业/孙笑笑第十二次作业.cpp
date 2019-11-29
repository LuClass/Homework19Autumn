#include <iostream>
 using namespace std;
 int getSet(int rs[], const int a[], int n)
 {
 	int i,j,k=0;
 	for (i=0;i<n;i++)
 	{

 for (j=i+1;j<=n;j++)
 		if (a[i]==a[j])
 		break;
 		if (a[i]==a[j])
 		rs[k]=a[i];
 		k++;		
 		continue;
 	}

 return k;
 }


 int countSet(int rs[], const int a[], int n)
 {
 	int i,j,k=0,count[n];
 	cout<<count[1]<<endl;
 	for (i=0;i<n;i++)
 	{

 for (j=i+1;j<=n;j++)
 		if (a[i]==a[j])
 		break;
 		if (a[i]==a[j])
 		continue;
 		rs[k]=a[i];
 		k++;		
 	}
 	for (i=0;i<k;i++)
 	{
 		count[i]=0;
 		for (j=0;j<n;j++)
 		if (a[j]==rs[i])
 		count[i]++;
 	}
 }


 int rankSet(int rs[], const int a[], int n)
 {
 	int i,j,k=0,count[n],temp,tem;
 	for (i=0;i<n;i++)
 	{

 for (j=i+1;j<=n;j++)
 		if (a[i]==a[j])
 		break;
 		if (a[i]==a[j])
 		continue;
 		rs[k]=a[i];
 		k++;		
 	}
 	for (i=0;i<k;i++)
 	{
 		count[i]=0;
 		for (j=0;j<n;j++)
 		if (a[j]==rs[i])
 		count[i]++;
 	}
 	for (i=0;i<k-1;i++)
 	{
 		for (j=i+1;j<k;j++)
 		{
 			if (count[i]<count[j])
 			{
 				temp=count[i];
 				count[i]=count[j];
 				count[j]=temp;
 				tem=rs[i];
 				rs[i]=rs[j];
 				rs[j]=tem;
 			}
 		}
 	}
     for (i=0;i<k;i++)
     {
     	cout<<rs[i]<<":"<<count[i]<<endl;
     }
 }


 int main()
 {
 	int a[8]={3,1,2,3,1,5,2,1};
 	int rs[8];
 	rankSet(rs,a,8);
 	return 0;
 }