#include <iostream>
using namespace std;

int getSet(int rs[],const int a[],int n)
{
	rs[0] = a[0];
	int rs_ind = 0;
	bool b = true;
	for(int i=1;i<n-1;i++)
	{
		for(int j=0;j<=rs_ind;j++)
		{
			if(rs[j]=a[i])
			{
				b = false;
				break;
			}
			} 
		   if(b = true)
		   {
		   	   rs_ind++;
		   	   rs[rs_ind] = a[i];
		   }
		b = true;		
	}
	return ++rs_ind;
}

void getSet1(int rs[],int times[],const int a[],int n)
{
	rs[0] = a[0];
	int rs_ind = 0;
	times[0] = 1;
	bool b = true;
	for (int i=1;i<n-1;i++)
	{
		for(int j=0;j<=rs_ind;j++)
		{
			if(rs[j]=a[i])
			{
				b = false;
				times[j]++;
				break;
		}
	}
	 if(b = true)
		   {
		   	   rs_ind++;
		   	   rs[rs_ind] = a[i];
		   	   	times[rs_ind] = 1;
		   }
}
void sort(int rs[], int times[], const int a[], int n)   
{
	int m = getSet(rs, a, n);    
	getSet1(rs, times, a, n);    
	int temp;
	for (int i = 0; i < m - 1; i++)    
	{
		for (int j = 0; j < m - 1 - i; j++)
		{
			if (times[j] < times[j + 1])
			{
				temp = times[j];
				times[j] = times[j + 1];
				times[j + 1] = temp;
				temp = rs[j];
				rs[j] = rs[j + 1];
				rs[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < m; i++)
		cout << rs[i] << ":" << times[i] << endl;
}

int main()    
{
	int a[8] = { 3,1,2,3,1,5,2,1 };
	int rs[100], times[100];
	fill_n(rs, 100, 0);
	fill_n(times, 100, 0);
	cout << getSet(rs, a, 8) << endl;
	sort(rs, times, a, 8);
	return 0;
}
