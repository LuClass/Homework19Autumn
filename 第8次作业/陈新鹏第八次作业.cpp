//第六题
#include <iostream>
using namespace std;
int T(long m,long n)
{int t;
   if(m>=n)
  {for(;m%n!=0;m%n)
  {t=m%n;m=n;n=t;}
  return n;}
  else
  {for(;n%m!=0;n%m)
  {t=n%m;n=m;m=t;}
  return m;}}

int F(long m,long n)
{int s;
s=m*n/T(m,n);
return s;}

int main(void)
{long m,n;
cin>>m;cin>>n;
cout<<"最大公约数为" <<T(m,n)<<endl;
cout<<"最小公倍数为"<<F(m,n);
return 0;
//第七题（递推）
#include <iostream>
using namespace std;
int T(long n)
{
long s,t;
if(n>=10){
for(;n*10/10>=10;n/10)
{t=n%10; n/=10;cout<<t;}
                     }
else cout<<n;
}

int main(void)
{
long n;
cin>>n;
T(n);
return 0;
}
//第七题（递归）
#include <iostream>
using namespace std;
int T(long n)
{
	long s,t;
	if(n>=10){
     t=n%10;n/=10;cout<<t;       
              T(n);}
	else cout<<n;
}

int main(void)
{
	long n;
	cin>>n;
	T(n);
	return 0;
}
