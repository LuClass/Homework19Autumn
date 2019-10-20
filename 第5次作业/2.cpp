#include<iostream.h>
void main()
{    
     double i1,i2,i4,i6,i10,x,award;
     cin>>x;
     i1=100000*0.1;
     i2=i1+100000*0.75;
     i4=i2+200000*0.5;
     i6=i4+200000*0.3;
     i10=i6+400000*0.15;
     if(x<=100000)
        award=x*0.1;
        else if(x<=200000)
             award=i1+(x-100000)*0.075;
             else if(x<=400000)
                  award=i2+(x-200000)*0.05;
				  else if(x<=600000)
                       award=i4+(x-400000)*0.03;
                       else if(x<=1000000)
                            award=i6+(x-600000)*0.015;
                       else
                            award=i10+(x-1000000)*0.01;
	 cout<<award;
}