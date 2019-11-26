#include<iostream>
#include<string.h>
using namespace std;

int getset(int rs[],const int a[],int n)
{ int cf=0; int i=0,j=0,k,count=0;
   for(i=0;i<n;i++)
   { 
     rs[j]=a[i];
     for(k=0;k<j;k++)
      if(rs[k]==rs[j]) cf++;
    j++;
    if(cf!=0) j--;
    else count++;
   	cf=0;
   }
  return count;
}

/*int main()
{
	int a[8]={3,1,2,3,1,5,2,1};int rs[8];
	int count=getset(rs,a,8);
	for(int i=0;i<count;i++)
	cout<<rs[i]<<" ";
}*/

void cishu(int rs[],const int a[],int n)
{   int c=getset(rs,a,n);
int cs[10]={0};
	for (int i=0;i<c;i++)
	{
	for(int j=0;j<n;j++)
	if(rs[i]==a[j])  cs[i]++;
    }
    for(int i=0;i<c;i++)
    cout<<cs[i]<<" ";
    cout<<"(cishu)"<<endl;
}

void px(int rs[],const int a[],int n)
{ int c=getset(rs,a,n);
     int cs[10]={0};
	for (int i=0;i<c;i++)
	{
	for(int j=0;j<n;j++)
	if(rs[i]==a[j])  cs[i]++;
    }
    int i, j, temp1,temp2;
	for(i = 0; i < c-1; i++)//外层循环控制总轮次
		for(j = 0; j < c-1-i; j++)//内层循环比较次数
			if(cs[j] < cs[j+1]){	//是否要交换
				temp1 = cs[j]; 
				cs[j] = cs[j+1]; 
				cs[j+1] = temp1;
				temp2 = rs[j]; 
				rs[j] = rs[j+1]; 
				rs[j+1] = temp2;
			}
for(i=0;i<c;i++)
{
	cout<<rs[i]<<":"<<cs[i]<<endl;
}
}


int main()
{
	int a[8]={3,1,2,3,1,5,2,1};int rs[8];
	int count=getset(rs,a,8);
	for(int i=0;i<count;i++)
	cout<<rs[i]<<" ";
	cout<<endl;
	cishu(rs,a,8);
	px(rs,a,8);
}




