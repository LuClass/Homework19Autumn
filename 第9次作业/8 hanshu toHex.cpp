#include<iostream.h>
void toHex(int x)
{    if(!x)
        return;    
     toHex(x/16);
	 char a;
	 if(x%16<10)
	 {   a=x%16+48;
	     cout<<a;
	 } 
	 else
	 {   a=x%16-10+'a';
	     cout<<a;
	 }
}