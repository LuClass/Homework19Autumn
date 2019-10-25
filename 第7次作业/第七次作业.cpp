2.
#include <iostream>
using namespace std;
main ()
{
	long int i;
	cin>>i;
	int bonus1,bonus2,bonus3,bonus4,bonus5,bonus6,bonus7,bonus8,bonus9,bonus10,bonus11;
    bonus1=100000*0.1;
    bonus2=bonus1+100000*0.075;
    bonus3=bonus2+200000*0.05;
    bonus4=bonus3+200000*0.03;
    bonus5=bonus4+400000*0.015;
    bonus6=i*0.1;
    bonus7=bonus1+(i-100000)*0.075;
    bonus8=bonus2+(i-200000)*0.05;
    bonus9=bonus3+(i-400000)*0.03;
    bonus10=bonus4+(i-600000)*0.015;
    bonus11=bonus5+(i-1000000)*0.01;
    switch((i-1)/100000)
    {
    	case 0:cout<<bonus6;
    	       break;
    	case 1:cout<<bonus7;
    	       break;
    	case 2:
    	case 3:cout<<bonus8;
    	       break;
    	case 4:
    	case 5:cout<<bonus9;
    	       break;
    	case 6:
    	case 7:
    	case 8:
    	case 9:cout<<bonus10;
    	       break;
    	default:cout<<bonus11;
    	        break;
	}
	return 0;
}

13.
#include <iostream>
using namespace std;
main ()
{
	int i,j,k,n;
	for(n=100;n<1000;n++){
	i=n/100;
    j=n/10%10;
    k=n%10;
    if(n==i*i*i+j*j*j+k*k*k)
    cout<<n<<" ";}
    return 0;
}

16.#include <iostream>
using namespace std;
main ()
{
	int a,b,m,n,temp;
    cin>>m>>n;
    if(m<n)
  {
    temp=m;
    m=n;
    n=temp;
  }
    a=m;b=n;
    while(b!=0)
  {
    temp=a%b;
    a=b;
    b=temp;
  }
   cout<<"最大公约数:"<<a<<endl;
   cout<<"最小公倍数:"<<m*n/a<<endl;
   return 0;
}

23.
#include <iostream>
using namespace std;
main ()
{
	int a,b,i,j,k;
	cin>>a>>b;
  for(i=0;i<=b-1;i++)
  {
    for(j=0;j<=i;j++)
    cout<<" ";
    for(k=0;k<=a-1;k++)
    cout<<"*";
    cout<<"\n";
  }
  cout<<"\n";
   for(i=0;i<=b-1;i++)
  {
    for(j=0;j<=b-1-i;j++)
    cout<<" ";
    for(k=0;k<=a-1;k++)
    cout<<"*";
    cout<<"\n";
  }
  return 0;
}
