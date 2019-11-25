using namespace std;
#include <iostream>
#include <string.h>
#include <stdlib.h>
void bubbleSort(char * strs[], int n){		
	char *temp;
	for(int i = 0; i < n-1; i++)				
		for(int j = 0; j < n-i-1; j++)
			if(strcmp(strs[j], strs[j+1]) > 0){
				temp = strs[j];				
				strs[j] = strs[j+1];
				strs[j+1] = temp;
			}
}
int search(char *r2[], int n, char r1[])
{
	int i;
	for(i=0;i<n;i++)
	{
		if(strcmp(r2[i], r1)==0) return 0;
	}
	return 1;
}
void repeat(char * strs[], int n){		
	char *s2[n];
	int i;
	int e,f;
	for(i=0;i<n;i++)
	s2[i] = (char*)malloc(sizeof(char)*30);
	int num[50];
    int j,k;
	j=1;
	k=1;
	s2[0]=strs[0];
	for(i=1;i<n;i++)
	{
		if(search(s2,j,strs[i])==1)
		{
			s2[j]=strs[i];
			j++;
			k++;
		}
	}
	//cout<<k<<endl;
    int b[10];
	for(i=0;i<k;i++)
	{
		b[i]=0;
		for(j=0;j<n;j++)
		{
			if(strcmp(strs[j],s2[i]) == 0) b[i]++;
		}
	}
	int max=0;
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
	{
		if(b[j]>max)
		{
			max=b[j];
			f=j;
		}
	}
	for(e=0;s2[f][e];e++)
	cout<<s2[f][e];
	cout<<":"<<max<<endl;
	b[f]=0;
	max=0;
	f=0;
	}

}

int main()
{
	int n,i;
	cout<<"ÊäÈë×Ö·û´®ÊýÁ¿n£º"<<endl;
	cin>>n;
	char *s1[n];
	for(i=0;i<n;i++)
	{
		s1[i] = (char*)malloc(sizeof(char)*30);
		cin>>s1[i];
	}
	bubbleSort(s1,n);
	repeat(s1,n);
	return 0;
}
