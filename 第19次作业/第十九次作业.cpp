#include <iostream>
#define MAX 3
using namespace std;
char b[MAX][20];
int getRev(char *a)
{
	int i,j,count=0;
	for(i=0;*(a+i)!=0;i++)
	{
		for(j=i+1;*(a+j)!=0;j++)
		{
			if(*(a+i)>*(a+j))
			count++;
		}
	}
	return count;
}
void sort(char *p[])
{
	char *temp;
	int k[MAX];
	int i,j;
	for(i=0;i<MAX;i++)
	k[i]=getRev(b[i]);
	for(i=0;i<MAX-1;i++)
	 for(j=0;j<MAX-i-1;j++)
	 if(k[j]>k[j+1])
	 {
	 	temp=*(p+j);
	 	*(p+j)=*(p+j+1);
	 	*(p+j+1)=temp;
	  }
	   for(int i=0;i<MAX;i++)
	  cout<<*(p+i)<<" "<<getRev(b[i])<<endl;	  
}
int main ()
{
	char *p[MAX]={b[0],b[1],b[2]};
	int i;
	for(int i=0;i<MAX;i++);
	{
		cin.getline(b[i],20);
	}
	sort(p);
	  return 0;
}

#include <iostream>
using namespace std;
int getWordCount(char *a)
{
	int i,count=0,b=0;
	for(i=0;*(a+i)!=0;i++)
	{
		if(*(a+i)==' '||*(a+i)=='\t')
		b=0;
		else if(b==0)
		{
			count++;
			b=1;
		}
	}
	return count;
}
int main ()
{
	char p[100];
	cin.getline(p,100);
	cout<<getWordCount(p)<<endl;
	return 0; 
}
