#include <iostream>
using namespace std;
int main (){
	float x,y;
	cout<<"x=";
	cin>>x;
	switch ((int)x/10){
		case 0:y=10*0.1;break;
		case 1:y=10*0.1+(x-10)*0.075;break;
		case 2:
		case 3:y=10*0.1+10*0.075+(x-20)*0.05;break;
		case 4:
		case 5:y=10*0.1+10*0.075+20*0.05+(x-40)*0.03;break;
		case 6:
		case 7:
		case 8:
		case 9:y=10*0.1+10*0.075+20*0.05+20*0.03+(x-60)*0.015;break;
		default:y=10*0.1+10*0.075+20*0.05+20*0.03+40*0.015+(x-100)*0.01;
	}
	cout<<"geting  "<<y;
	return 0;
}
#include <iostream>
using namespace std;
int main (){
	int a,b,c,i;
	cout<<"shu=";
	for(i=100;i<=999;i++){
		a=i%10;
		b=i/10%10;
		c=i/100;
		if(a+b*10+c*100==a*a*a+b*b*b+c*c*c)
		 { cout<<i<<endl;}
	}
	return 0;
}
#include <iostream>
using namespace std;
int main (){
	int m,n,chu,bt,yu,z;  
	cout<<"m=";
	cin>>m;
	cout<<"n=";
	cin>>n;
	if (m<n){
		z=n;
		n=m;
		m=z;}
	for (yu=n,chu=m;yu!=0;)
	 { bt=chu%yu;
	  chu=yu;
	  yu=bt; 
	 }
	   cout<<"max chu="<<chu;
	   return 0;
}
#include <iostream>
using namespace std;
int main (void){
	int a,b,i,j;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
for(j=1;j<=b;j++){
  for (i=1;i<=a+j;i++)	{
     	if(i<j)
    	cout<<" ";
    	else
	    cout<<"*";}
      cout<<endl;}
  for(j=1;j<=b;j++)
                
				{
	 for(i=1;i<=a+b-j+1;i++){
	 if(i<b-j+1)
	 cout<<" ";
	 else
	 cout<<"*";}
	 cout<<endl;
                 } 
	 return 0;  
}
