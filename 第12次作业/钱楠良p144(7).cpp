using namespace std;
#include<iostream>
int getset(int rs[],int a[],int n)
{
	int m=8,i,j,temp,min,xb,x=8;
	for(i=0;i<n-1;i++)
	{
	   min=a[i];
	   xb=i;
	   for(j=i+1;j<m;j++)
	   {
	   	if(min>a[j])
	   	{
	   		min=a[j];
	   		xb=j;
	   	
	   	}
	   }
	   	if(i!=xb)
	   	{
	   		temp=a[i];
	   		a[i]=a[xb];
	   		a[xb]=temp;
	   	}	
	}
	rs[0]=a[0];
	for(int t1=0,t2=1;t1<m;t1++)
	{
		if(a[t1+1]==a[t1])
		x=x-1;
		else
		{
			rs[t2]=a[t1+1];
			t2++;
		}
	}
	for(int d=0;d<x;d++)
	{
	cout<<rs[d]<<" ";
	}
	cout<<endl;
	return x;	
}





int cs(int rs[],int a[],int n)
{
	int m=8,i,j,temp,min,xb,x=8;
	for(i=0;i<n-1;i++)
	{
	   min=a[i];
	   xb=i;
	   for(j=i+1;j<m;j++)
	   {
	   	if(min>a[j])
	   	{
	   		min=a[j];
	   		xb=j;
	   	
	   	}
	   }
	   	if(i!=xb)
	   	{
	   		temp=a[i];
	   		a[i]=a[xb];
	   		a[xb]=temp;
	   	}	
	}
	rs[0]=a[0];
	for(int t1=0,t2=1;t1<m;t1++)
	{
		if(a[t1+1]==a[t1])
		x=x-1;
		else
		{
			rs[t2]=a[t1+1];
			t2++;
		}
	}
	int sum=0;
	
	for(int q=0;q<x;q++)
    {
    	for(int qq=0;qq<8;qq++)
    	{
    		if(rs[q]==a[qq])
    		sum+=1;
    	}
    	cout<<sum<<" ";
    	
    	sum=0;
    	
    }
    return 0;	
}







int sc(int rs[],int a[],int n)
{
     int m=8,i,j,temp,min,xb,x=8;
	for(i=0;i<n-1;i++)
	{
	   min=a[i];
	   xb=i;
	   for(j=i+1;j<m;j++)
	   {
	   	if(min>a[j])
	   	{
	   		min=a[j];
	   		xb=j;
	   	
	   	}
	   }
	   	if(i!=xb)
	   	{
	   		temp=a[i];
	   		a[i]=a[xb];
	   		a[xb]=temp;
	   	}	
	}
	rs[0]=a[0];
	for(int t1=0,t2=1;t1<m;t1++)
	{
		if(a[t1+1]==a[t1])
		x=x-1;
		else
		{
			rs[t2]=a[t1+1];
			t2++;
		}
	}
	int sum=0;
	int time[x];
	for(int q=0;q<x;q++)
    {
    	for(int qq=0;qq<8;qq++)
    	{
    		if(rs[q]==a[qq])
    		sum+=1;
    	}
    	
    	time[q]=sum;
    	sum=0;
    }
    int step;
	for (int aa=x-2;aa>=0;aa--)
	{
		for (int bb=0;bb<=aa;bb++)
		{
			if (time[bb]<time[bb+1])
			{
				step=time[bb];
				time[bb]=time[bb+1];
				time[bb+1]=step;
				step=rs[bb];
				rs[bb]=rs[bb+1];
				rs[bb+1]=step;
			}
		}
	}
	for (int w=0;w<x;w++)
	{
		cout<<rs[w]<<":"<<time[w]<<endl;
	}
	return 0;
}









int main()
{
	cout<<"请输入数学组的大小和数组的元素"<<endl;
	int n;
	cin>>n;
	int a[n];
	int x;
	int rs[x];
    for(int w=0;w<n;w++)
    {
    	cin>>a[w];
    }
    for( int ww=0;ww<n;ww++)
    {
    	cout<<a[ww]<<" ";
    }
    cout<<endl;
	cout<<getset(rs,a,8);
	cout<<endl;
	cs(rs,a,8);
	sc(rs,a,8);
}