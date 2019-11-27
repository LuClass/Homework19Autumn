#include <iostream>
#include <iomanip>
using namespace std;

//给数组rs赋值并返回数组rs中元素的个数 
int getset(int rs[],const int a[],int n)
{
	int right=0;int k=1;int sum=1;
	rs[0]=a[0];
	for (int i=1;i<n;i++)
	{
		right=0;
		for (int j=0;j<=(k-1);j++)
		{
			if (a[i]!=rs[j])
			right++;	
		}	
		if (right==k)
		{
			rs[k]=a[i];
			k++;
			sum++;
		}
	}
	return sum;
}


//统计数组rs中某元素在数组a中出现的次数 
int gettimes(int rs[],int num,const int a[],int n) 
{
	int sum=0;
	for (int r=0;r<n;r++)
	{
		if (rs[num]==a[r])
		sum++;
	}
	return sum;
}


//选择排序 
void setOrder(int a[],int n)
{
	int i, j, minValue, minIndex, temp; 
	for(i = 0; i < n - 1; i++)
	{			
		minValue = a[i];				
		minIndex = i;					
		for(j = i + 1; j < n; j++)
		{	
			if(minValue > a[j])
			{	
				minValue = a[j]; 
				minIndex = j;
			}
		}
		if(i != minIndex)
		{		
			temp = a[i]; 
			a[i] = a[minIndex]; 
			a[minIndex] = temp;
		}
	}
}


//作用：排序并输出“元素值：出现次数” 
void output(int rs[],int num,int a[],int n)
{
	int b[num];
	for (int l=0;l<num;l++)
	{
		b[l]=gettimes(rs,l,a,n);
	}
	setOrder(b,num);
	cout<<"数组rs中"<<endl;
	cout<<"元素值：出现次数"<<endl;
	for (int l=(num-1);l>=0;l--)
	{
		int stop=0;
		for (int y=(num-1);y>l;y--)
		{
			if (b[y]==b[l])
				stop=1;
		}
		if (stop==1)
			continue;
		for (int g=0;g<num;g++)
		{
			if (gettimes(rs,g,a,n)==b[l])
				cout<<rs[g]<<":"<<b[l]<<endl;
		}
	}
}


//主函数
int main()
{
	int n,num;
	cout<<"请输入集合a中元素的个数"<<endl;
	cin>>n;
	cout<<endl;
	int a[n],rst[n];
	cout<<"请为集合a中这"<<n<<"个元素赋值"<<endl; 
	for (int t=0;t<n;t++)
		cin>>a[t];
	cout<<endl;
	num=getset(rst,a,n);
	int rs[num];
	num=getset(rs,a,n);
	cout<<"集合rs中元素个数为："<<num<<endl;
	cout<<'\n';
	cout<<"集合rs中的元素如下："<<endl;
	for (int u=0;u<num;u++)
		cout<<setw(5)<<rs[u];
	cout<<'\n';
	cout<<"集合rs中各元素在集合a中出现的次数如下："<<endl; 
	for (int p=0;p<num;p++)
		cout<<setw(5)<<gettimes(rs,p,a,n);
	cout<<'\n';
	output(rs,num,a,n);
	return 0;
} 
