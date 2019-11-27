#include<iostream.h>
#include<string.h>
int getWordCount(char a[])
{   int i,count=0;
    for(i=0;i<strlen(a);i++)
		if(a[i]!=' '&&a[i]!='	')
			break;
    for(;i<strlen(a);i++)
		if(a[i]!=' '&&a[i]!='	'&&(a[i+1]==' '||a[i+1]=='	'))
			count++;
    return count;
}
void main()
{    char a[100];
     cin.getline(a,100);
	 a[strlen(a)]=' ';
     cout<<getWordCount(a);
}
