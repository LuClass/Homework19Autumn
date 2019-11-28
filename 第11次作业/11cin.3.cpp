# include <iostream>
# include <math.h>
using namespace std;
int yinhe(const int x){
int a,b,c;
a=0;
b=0;
for(int i=2;i<=sqrt(x);i++){
  if(x%i==0){
  	a=a+i;
  	b=b+x/i;
  	if(x==i*i)
  	b=b-i;
  }
}	c=a+b;
return c+1;
}
int main (void){
	int x,y;
	cout<<"input two number";
	cin>>x>>y;
	for(int j=x;j<=y;j++){
	if(j==yinhe(j))
	cout<<j<<endl;
}
return 0;
}
