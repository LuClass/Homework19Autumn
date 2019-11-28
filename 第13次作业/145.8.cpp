using namespace std;
#include <iostream>
#include <string.h>
int getWordCount(char a[])
{   int m=strlen(a);
	int count=0,n=0;
	for(;count<m-1;count++)
	 if((a[count]!=' '&&a[count]!='\t')&&(a[count+1]==' '||a[count+1]=='\t'))
	   n++;
	if((a[m-2]!=' '&&a[m-2]!='\t')||(a[m-1]!=' '&&a[m-1]!='\t'))  n++;
	return n;	
} 

int main()
{ char a[100];
   cin.getline(a,100);
   cout<<getWordCount(a);
}
