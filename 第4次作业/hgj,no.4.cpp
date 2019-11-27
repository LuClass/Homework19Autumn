#include<iostream>
#include<iomanip>
using namespace std;
int main (void) 
{   cout<<"T1:"<<endl;
    cout<<"输入字符串(第一个为数字）："<<endl;
	int x=0;
	char a;
	do{a=cin. get() ;
	if(a>='0'&&a<='9') 
	x++;
	else continue;
		}while(a !='\n') ;
	cout<<"数字字符有："<<x<<"个"<<endl;
	

	   
	   cout<<endl<<"T2:"<<endl;
	   int e, f, g,h;
	   cout<<"1/2"<<setw(10) <<"3/2"<<setw(10) ;
	   for(e=1, f=5, g=3;e<=18;e++) 
	      { cout<<f<<'\/'<<g<<setw(12) ;
	        f=f+g;
	        g=f-g;
	      }
	      
	      
	      	
	cout<<endl<<"T3:"<<endl;
	int z, y=0;
	cout<<"输入一个正整数：";
	cin>>z;
	cout<<endl<<"其因子有：";
	for(int i=1;i<=z;i++) 
	{
		if(z%i==0) 
		cout<<i<<setw(3);
	}
	cout<<endl<<"1~100完全数有："；
	for(int n=2;n<=100;n++) 
	   { for(int b=1;b<n;b++) 
	      {if(n%b==0) y+=b;}  
	     if(n==y) cout<<n<<"   ";
	   y=0;
	   }	
	   
	   	
	   return 0;	
}

