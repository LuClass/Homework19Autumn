#include<iostream>
#include<string.h>
#include<iomanip>
#define MAX 5
using namespace std;
int getRev(char a[])
{
	int n=strlen(a),num=0;
	char temp1[1],temp2[1];
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			temp1[0]=a[i];
			temp2[0]=a[j];
			if(strcmp(temp1,temp2)>0)
			{
				num++;
			}				
		}
	}
	return num;
}
void up()
{
	char a[MAX][20];
	char temp[20];
	cout<<"please input a["<<MAX<<"][20]"<<endl;
	for(int q=0;q<MAX;q++)
	{
		cin.getline(a[q],20);
	}
	for(int x=0;x<MAX-1;x++)
	{
		for(int y=0;y<MAX-1-x;y++)
		{
			if(getRev(a[y])>getRev(a[y+1]))
			{
				strcpy(temp,a[y]);
				strcpy(a[y],a[y+1]);
				strcpy(a[y+1],temp);
			}
		}
	}
	cout<<endl<<setw(20)<<"char"<<" "<<"Rev"<<endl<<endl;
	for(int p=0;p<MAX;p++)
	{
		cout<<setw(20)<<a[p]<<" "<<getRev(a[p])<<endl;
	}
}
int getWordCount(char a[])
	{
		int n=strlen(a),num=0,key=0;
		for(int x=0;x<n;x++)
		{
			if(a[x]=='\t'||a[x]==' ')
			{
				key=0;
			continue;
			}
			if(key==0)
			{
				num++;
				key=1;
			}					
		}
		return num;
	}
int main(void)
{
	cout<<"p144 t14 (6):"<<endl;
	char a[20];
	cout<<"please input char a[20]:"<<endl;
    cin.getline(a,20);
	cout<<getRev(a)<<endl<<endl;
	up();
	cout<<endl<<"p144 t14 (8):"<<endl<<endl;
	char b[100];
	cout<<"please input a sentence:"<<endl<<endl;
	cin.getline(b,100);
	cout<<endl<<"this sentence has "<<getWordCount(b)<<" word(s)";
	return 0;
}
