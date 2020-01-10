#include <string.h>
#include <stdio.h>
using namespace std;
#include <iostream>
main(){ int n;
	 cout<<"输入所打出的字符串个数：";
	 cin>>n;
	 char a[n][100];
	 char temp[1][100];
	 for(int i=0;i<=n;i++) gets(a[i]);
	 for(int i=1;i<n;i++)
	    for(int j=i+1;j<=n;j++)
	        if(strcmp(a[i],a[j])>0)
               {
               	  strcpy(temp[0],a[i]);
               	  strcpy(a[i],a[j]);
               	  strcpy(a[j],temp[0]);
					  };
		for(int i=1;i<=n;i++) cout<<a[i]<<endl;
		return 0;	   
}
