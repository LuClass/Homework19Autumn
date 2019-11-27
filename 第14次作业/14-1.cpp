#include<iostream>
#include<math.h>

using namespace std;

struct fun{
	double x1,x2,del;
	};
	
fun f(int a,int b,int c){
	fun t;
	t.del=sqrt(b*b-4*a*c);
	t.x1=(-b+t.del)/(2*a);
	t.x2=(-b-t.del)/(2*a);
	return t;	
}

int main(){
	int a,b,c;
	fun fun1;
	cin>>a>>b>>c;
	if(b*b-4*a*c<0){
		cout<<"no";
		return 0;
	}
	fun1=f(a,b,c);
	cout<<fun1.x1<<" "<<fun1.x2;
	return 0;
}
