#include<iostream>
using namespace std;
int main()
{
    int a,b,x,sum=0;
    int i,j;
    cin>>i>>j;
    cout<<endl<<"ÍêÈ«Êý:"<<endl;
    for(a=i+1;a<j;a++){
        for(b=1;b<a;b++){
            if(a%b==0)
                sum+=b;
        }
        if(sum==a)
		    cout<<a<<endl;
        sum=0;
    }
  return 0;
}
