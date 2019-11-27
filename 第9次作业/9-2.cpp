#define S(a,b,c)  ((a+b+c)/2)
#define AREA(a,b,c) sqrt(S(a,b,c)*(S(a,b,c)-a)*(S(a,b,c)-b)*(S(a,b,c)-c))

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    if(a<(b+c)&&b<(a+c)&&c<(a+b)){
        cout<<AREA(a,b,c)<<endl;
    }
    else{
        cout<<"Error!"<<endl;
    }
    return 0;
} 
