T2
#include<iostream>
using namespace std;
int main ()
{long int i,n;
cout<<"请输入当月利润"<<endl;
cin>>i;
    switch(i/100000){
     case 0:n=i*0.1;
     break;
     case 1:n=(i-100000)*0.075+10000;
     break;
     case 3:
     case 2:n=(i-200000)*0.05+17500;
     break;
     case 5:
     case 4:n=(i-400000)*0.03+27500;
     break;
     case 7:
     case 8:
	 case 9:	
	 case 6:n=(i-600000)*0.015+33500;
	 break; 
	 default:n=(i-1000000)*0.01+39500;
}
 cout<<"应发放奖金总数为"<<n<<"元"<<endl;
 return 0;
}
T13
#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	cout<<"water flower's number is ";
	for(int n=100;n<1000;n++)
	{i=n/100;
	j=n/10%10;
	k=n%10;
	if(100*i+10*j+k==j*j*j+i*i*i+k*k*k)
	cout<<n<<" ";
	}
	return 0;
}
T16
#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"please input two numbers"<<endl;
cin>>a>>b;
for(int i=a-1;i>=1;i--){
    if(a%i==0&&b%i==0){
     cout<<a<<"和"<<b<<"的最大公因数是"<<i<<endl;
     break;}
}
for(int j=b+1;j>=b;j++){
  if(j%a==0&&j%b==0){
   cout<<a<<"和"<<b<<"的最小公倍数是"<<j;
  break;} 
}
return 0; 
}
T23
#include<iostream>
using namespace std;
int pxsbx(int a,int b){
	for(int x=1;x<=b;x++){
	   for(int j=0;j<=x-1;j++)
	   cout<<" "; 
	   for(int k=0;k<=b-1;k++)
	   cout<<"*";
	cout<<"\n";
	}
	cout<<endl;
    for(int x=b;x>=0;x--){
	   for(int j=0;j<=x-1;j++)
	   cout<<" "; 
	   for(int k=0;k<=b-1;k++)
	   cout<<"*";
	cout<<"\n";
	}
	return 0;
}
int main (){
	int a,b;
cout<<"请输入行数和列数";
cin>>a>>b; 
pxsbx(a,b);
return 0;
}
