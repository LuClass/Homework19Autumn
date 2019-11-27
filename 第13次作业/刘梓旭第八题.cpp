#include<iostream>
#include<string.h>
using namespace std;
int getWordCount(char a[])
{int count=0,i;
for(i=0;;i++)
   { if(a[i]==' '||a[i]=='\t') break;
   }
     while(1)
     {for(;;i++)
 			if(a[i]==' '||a[i]==0||a[i]=='\t') break;
 		count++;
 		for(i+=1;i<strlen(a);i++)
 			if(a[i]!=' ') break;
 		if(a[i]==0) break;
 	}
 	return count;
	 }
int main()
{char a[999];
cin.getline(a,999);
 	cout<<getWordCount(a);
 	return 0;
}


