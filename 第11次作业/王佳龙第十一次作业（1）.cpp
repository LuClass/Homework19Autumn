#include <iostream>
using namespace std;
int f(int n){
	int a,b,c,d,m;
	    m=n;
		b=n%10;
		n=n/10;
        c=n%10;
        n=n/10;
        d=b*b*b+c*c*c+n*n*n;
  	    if(d==m)
  	    return true;
  	    else
  	    return false;
}
int h(int i,int j){
	for(;i<j;i++){
        if(f(i))
        cout<<i<<" ";     
}	
}
int main(){
	int i,j;
	cout<<"依次输入i，j的值（i<j)"<<endl;
	cin>>i;
	cin>>j;
	if(i>j)
	cout<<"error"<<endl;
	else
	h(i,j);
}

