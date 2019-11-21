#include<iostream>
#include<string.h>
#define MAX 5
using namespace std;
int getRev(char a[])
{
	int i,j,len=strlen(a),count=0;
	char t;
	for(i=0;i<len-1;i++)
	 for(j=i+1;j<len;j++)
	 {
	   if(a[i]>a[j])
	   count++;
     }
	 return count;
}

int main(void)
{	
	int i,j,ni[MAX],s=0;
	
	char a[MAX][21]={"DAABEC","ZLSK","653143","KE732","aslhdaslnd"};
	
	char k[MAX][21];
	
       for(i=0;i<MAX;i++)
		   ni[i]=getRev(a[i]);
		   
        for(i=0;i<MAX-1;i++)
           for(j=0;j<MAX-i-1;j++)
           if(ni[i]>=ni[i+1])
           {
		    s=ni[i];
			ni[i]=ni[i+1];
			ni[i+1]=s;
            strcpy(k[0],a[i]);
			strcpy(a[i],a[i+1]);
			strcpy(a[i+1],k[0]);
           }
           for(int i=0;i<MAX;i++)
           cout<<a[i]<<"     "<<ni[i]<<endl;
}
