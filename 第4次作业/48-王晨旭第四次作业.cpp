4.
#include <iostream>
using namespace std;
int main(void){
	int count=0;
	char ch=0;
	do{
		ch=cin.get();
		if(ch>='0'&&ch<='9')
		count ++;
	}while(ch!='\n');
	cout<<"count="<<count<<endl;
	return 0;
}

7.
#include <iostream>
using namespace std;
int main(void){
   cout<<1<<"/"<<2<<endl;
   int x=2,y=1,z,n=2;
   while(n<=20){
   	z=x,x=x+y,y=z;
   	n++;
   	cout<<x<<"/"<<y<<endl;
   }
   return 0;
}

8.
#include <iostream>
using namespace std;
int main(){
	int x;
	cout<<"输入正整数";
    cin>>x;
    for(int a=1;a<=x;a++){
    	  if(x%a==0)
    	  cout<<"它的分子有"<<a<<endl; 
	}
    for(int y=2;y=100;y++){
    	int s=0;
    	  for(int b=1;b<y;b++){
    	  	if(y%b==0)
    	  	s+=b;
		  }
		  if(s==y)
		  cout<<"完全数有"<<s<<endl; 
	}
    return 0;
	}
