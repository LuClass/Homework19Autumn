#include <string.h>
using namespace std;
#include <iostream>
#include <stdio.h>
main(){
	char a[255];
	int b[1000],t=0;
    gets(a);
	char *p=a;
	for(int i=0;*p!='\0';p++)
	    {
	    	int m=0;
	    	b[i]=0;
	    	while(*p>='0'&&*p<='9')
	              {
	                 b[i]=b[i]*10+*p-48;
					 m=1;
					 p++;              	
				  }    	 
			if(m) {
			        i++;
			        t+=1;
			        m=0;
			      }  
		}
		cout<<"整数个数："<<t<<endl;
		cout<<"分别是："<<endl;
		for(int i=0;i<t;i++) cout<<b[i]<<endl;
      }
