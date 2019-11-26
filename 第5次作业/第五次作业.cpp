//第二题
#include <iostream>
using namespace std;
main (void)
{
	long int i,b1,b2,b3,b4,b5,b;
	cin>>i;
	cout<<"当月利润="<<i<<endl;
	b1=100000*0.1;
	b2=b1+100000*0.075;
	b3=b2+200000*0.05;
	b4=b3+200000*0.03;
	b5=b4+400000*0.015;
	if (i<=100000)
	      b=i*0.1;
	 else
	     if(i<=200000)
	          b=b1+(i-100000)*0.075;
	      else
	          if(i<=400000)
	               b=b2+(i-200000)*0.05;
	           else
	                if(i<=600000)
	                      b=b3+(i-400000)*0.03;
	                 else
	                      if(i<=1000000)
	                           b=b4+(i-600000)*0.015;
	                       else
	                           b=b5+(i-1000000)*0.01;
	    cout<<"应发放奖金数为"<<b;

	return 0;
	}
	
	//第四题
	#include<iostream>
using namespace std;
int main(void)
{
	int D,M,Y,sum;
	cin>>Y;	cout<<Y<<"年"<<endl;
	cin>>M;    cout<<M<<"月"<<endl;
	cin>>D;    cout<<D<<"日"<<endl;
	if(M==1)  sum=0;
	 else   if(M==2)  sum=31;
	       else  if(M==3)  sum=59;
	            else  if(M==4)  sum=90;
	                 else  if(M==5)  sum=120;
	                      else  if(M==6)  sum=151;
	                          else  if(M==7)  sum=181;
	                              else  if(M==8)  sum=212;
	                                  else  if(M==9)  sum=243;
	                                      else  if(M==10)  sum=273;
	                                          else  if(M==11)  sum=304;
	                                              else  if(M==12)  sum=334;
	 if((Y%400==0||(Y%4==0&&Y%100!=0))&&M>2)
	 cout<<"第"<<sum+D+1<<"天"<<endl;
	 else  
	 cout<<"第"<<sum+D<<"天"<<endl;                    
	  return 0;
}
	
	
	//第六题
	#include<iostream>
using namespace std;
int main(void)
{
	cout<<"*******"<<endl;
	cout<<'*'<<endl;
	cout<<'*'<<endl;
	cout<<'*'<<endl;
	cout<<'*'<<endl;
	cout<<"*******"<<endl;
	 return 0;
}

//第八题
#include<iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	for(int i=1;i<=9;i++)
	{for(int j=1;j<=i;j++)
	    cout<<' '<<j<<'*'<<i<<'='<<setw(2)<<j*i;
	    cout<<endl;}
	  return 0;
}

//第十题
#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
	  int i,j;
	  for(i=1;i<=20;i++)
	    {for(j=1;j<=i;j++)
	       cout<<"平"<<setw(2);
	       cout<<endl;
	    	}
	  return 0;
}