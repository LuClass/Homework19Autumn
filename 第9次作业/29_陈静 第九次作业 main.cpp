#include<iostream>

#include"hex.h"

#include"max.h"

#include<math.h>



using namespace std;



//T21.(9)

#define s(a,b,c) ((a+b+c)/2.0)

#define area_def(a,b,c) sqrt(1.0*s(a,b,c)*(s(a,b,c)-a)*(s(a,b,c)-b)*(s(a,b,c)-c))

double area(double a,double b,double c){

    double s = (a+b+c)/2.0;

    return sqrt(s*(s-a)*(s-b)*(s-c));

}



int main(){

    {

        //T21.(8)

        int a,b;

        cin>>a>>b;

        print_hex(MAX_def(a,b));

        cout<<endl;

        print_hex(MAXX(a, b));

        cout<<endl;

    }

    {

        //T21.(9)

        int a,b,c;

        cin>>a>>b>>c;

        cout<<area(a,b,c)<<endl;

        cout<<area_def(a,b,c)<<endl;

    }

    return 0;

}