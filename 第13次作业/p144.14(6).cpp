#include<iostream>
#include<string.h>
#define MAX 6
using namespace std;
int getRev(char a[])
{
	int nixu = 0;
	int n = strlen(a);
	for(int i = 0;i<n;i++)
	{
		for(int j = i+1;j<n;j++)
		{
			if(a[i]>a[j])
			nixu++;
		}
	}
	return nixu;
}
int main()
{
	int temp=0;
	int nixu[MAX];
	char a[MAX][21] = { "DAABEC",
						"jsgijgha",
						"gawgbdfg",
						"gfsd",
						"sddgcxbqaag",
						"ssdwxvtqafd"};
	char tem[MAX][21];
	for(int i = 0;i<MAX;i++)
	nixu[i] = getRev(a[i]);
	for(int i = 0;i<MAX-1;i++)
		for(int j = 0;j< MAX - 1 - i;j++)
			if(nixu[j+1]<nixu[j])		 
			{
				temp = nixu[j];
				nixu[j]=nixu[j+1];
				nixu[j+1]=temp;
				strcpy(tem[0],a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],tem[0]);	
			}
	for(int i = 0;i<MAX;i++)
	cout<<a[i]<<" "<<nixu[i]<<endl;
}
