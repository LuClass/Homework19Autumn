	#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

void getRandom(int a[],int n)
{
	
	srand(time(NULL));
	for(int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	}		
}

int getMax(const int a[],int n)
{
	int min=0;
	for (int x=1;x<n;x++)
	{
		if (a[x]<a[min])
		{
			min=x;
		}
	}
	return min;
}

bool zs(long int a)
{
	for(long int x=2;x<=sqrt(a);x++)
	{
		if (a%x==0)
			return 0;
	}
	return 1;
}
long int sum(long int a)
{
	int sum=0;
	while(a!=0)
	{
		sum+=a%10;
		a/=10;
	}
	return sum;
}
long int sms(long int a)
{
	long int y;
	
	for(long int x=a;x<=5000000;x++)
	{
		if (zs(x)==1)
			continue;
		int t=x;
		int suum=0;
		for(long int m=2;m<=t;m++)
		{
			if(t%m==0&&t!=1)
			{
				suum+=sum(m);
				t/=m;
				m=1;
			}
			continue;
		}
		if(suum==sum(x))
		{
			y=x;
			break;
		}
						
	}
	return y;
}
int main(void)
{
	cout<<"p144 t14 (2):"<<endl<<endl;
	
	int n;
	cout<<"please input the size:";
	cin>>n;
	int a[n];
	getRandom(a,n);
	cout<<"No. "<<getMax(a,n)<<" is the min";	
	
	cout<<endl<<endl<<"p144 t14 (5):"<<endl<<endl;
	
	long int y=4937774;
	cout<<y<<"  its next sms is:"<<sms(y);
	
	cout<<endl<<endl<<"p144 t14 (10):"<<endl<<endl;
	
	int p[22];
	int nn=21;
	int wave=0;
	for (int a=1;a<=21;a++)
	{
		p[a]=a;
	}
	while (1)
	{
		
		for (int b=1;b<=21;b++)
		{
			if (p[b]!=0)
			{
				wave++;
				if (wave%5==0)
				{
					p[b]=0;
					nn--;
					if(nn==1)
						break;
				}
			}
			
		}
		if(nn==1)
			break;
	}
	int g;
	for (g=1;p[g]==0;g++){}
	
	cout<<"No. "<<g<<" left";	
	return 0;
}