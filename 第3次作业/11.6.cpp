#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double a,b,c; cin>>a>>b>>c;
	double deta=b*b-4*a*c;
	if(deta<0) cout<<"无根";
	else if(deta==0) cout<<"有一根为"<<-b/2*a;
	else cout<<"有两根为"<<(-b+sqrt(deta))/2*a<<"和"<<(-b-sqrt(deta))/2*a; 
	return 0;
}
