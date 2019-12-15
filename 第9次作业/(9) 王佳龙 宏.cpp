#include <iostream>
#include <math.h>
#define s (a+b+c)/2
using namespace std;
int main(){
    int area,a,b,c,d;
	cout<<"分别输入a,b,c的值"<<endl;
	cin>>a>>b>>c;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"面积为"<<area<<endl; 
}
 
