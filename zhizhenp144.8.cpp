using namespace std;
#include<iostream>
#include<string.h>
int getWordCount(char *a)
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
int main()
{ 
	char a[100];
	cin.getline(a,100);
 	cout<<endl<<getWordCount(a);
 	return 0;

}