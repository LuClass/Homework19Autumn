#include<iostream>
#include<string.h>
using namespace std;

struct NP
{
	char *rp;
};

int getRev(char *a)
{
	int count=0;
	char *temp;
	for(;*a;a++)
	{
		for(temp=a+1;*temp;temp++)
		{
			if(*a>*temp)
			count++;
		}
	}
	return count;
}

void del(NP *table, int max){
	for(int i = 0; i < max; i++)
	{
		delete [] table[i].rp;
	}
	delete []table;
}

int main()
{
	int i,j,max;
	cin>>max;
	NP * table = new NP[max];
	int *kk=new int[max];
	
	for(i=0;i<max;i++)
	{
		table[i].rp=new char[20];
		cin>>table[i].rp;
		kk[i]=getRev(table[i].rp);
	}
	
	for(i=0;i<max-1;i++)
	{
		int t;
		char tem[max];
		for(j=i+1;j<max;j++)
		{
			if(kk[i]>kk[j])
			{
				t=kk[i];
				kk[i]=kk[j];
				kk[j]=t;
				strcpy(tem,table[i].rp);
				strcpy(table[i].rp,table[j].rp);
				strcpy(table[j].rp,tem);
			}
		}
	}
	for(i=0;i<max;i++)
	cout<<table[i].rp<<" : "<<kk[i]<<endl;
	del(table,max);
	return 0;
}

