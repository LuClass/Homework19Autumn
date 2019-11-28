//  144页14 (2)

#include <iostream>
#include <stdlib.h>
using namespace std;

void getRandom(int a[],int n)
{
	int i;
	srand (a[0]);
	for(i = 0; i < n; i++)
		a[i] = rand() % 100;
}

int getMax(const int a[],int n)
{
	int i=0,j,max,maxindex;
	max=a[i];maxindex=i;
	for (j=1;j<n;j++)
	{
		if (a[j]>max)
		{
			max=a[j];
			maxindex=j;
		}
			
	}
	return maxindex;
}

int main(void)
{
	int n,maxvalue,maxindex;
	cout<<"请输入随机整数的个数"<<endl;
	cin>>n;
	int a[n];
	getRandom(a,n);
	maxindex=getMax(a,n);
	cout<<"最大值："<<a[maxindex]<<endl;
	cout<<"下标："<<maxindex<<endl;
	return 0;
}


//  144页14 (5)

#include <iostream>
using namespace std;

bool notSushu(long int n)
{
	if (n<=3)
	return false;
	for (int i=2;i<=(n-1);i++)
	{
		if (n%i==0)
		return true;
		else 
		return false;
	}
}

int shuSum(long int n)
{
	int sum=0;
	while(n!=0)
	{
		sum=sum+(n%10);
		n=n/10;
	}
	return sum;
}

int zysSum(long int n)
{
	int zyssum=0,i=2;
	for ( ;i<=n;i++)
	{
		while(i!=n)
		{
			if (n%i==0)
			{
				zyssum=zyssum+shuSum(i);
				n=n/i;	
			}
			else
			break;		
		}	
		if (n==i)
		zyssum+=shuSum(i);
	}
	return zyssum;
}

bool isSmith(long int n)
{
	if (notSushu(n) && (shuSum(n)==zysSum(n)))
	return true;
	else 
	return false;
}

int main (void)
{
	int n;
	cout<<"请输入一个正整数"<<endl;
	cin>>n;
	if (isSmith(n))
		cout<<"该数是史密斯数"<<endl;
	else
		cout<<"该数不是史密斯数"<<endl;
	
	cout<<"大于等于4937774的下一个史密斯数"<<endl; 
	for (long int t=4937774; ;t++)
	{
		if (isSmith(t))
		{
			cout<<t<<endl;
			break;
		}
	}
	return 0;
}


//  144页14 (10)

#include <iostream>
using namespace std;
int main (void)
{
	cout<<"报数问题"<<endl;
	int n=21; //总人数
	int people[n];
	
	int i;
	for (i=0;i<n;i++)   //赋予编号初值 
	{
		people[i]=i+1;
	} 
	
	int k=5;   //踢出队列的倍数数字 
	
	int j=0,num=n;
	for(i=1; ;i++)
	{
		if (i>n)  //初始化 
		i=1;
		
		if (people[i-1]!=0)   //跳过0值项 
		j++;
		
		if (j==k)      //踢出队列 
		{
			people[i-1]=0;
			num--;
			j=0;
		}
		
		if (num==1)    //剩余1人时跳出循环 
		break;
	}
	for(i=0;i<n;i++)
	{
		if (people[i]!=0)
		cout<<"最后一人的编号为："<<people[i]<<endl;
	}
	return 0;
}
