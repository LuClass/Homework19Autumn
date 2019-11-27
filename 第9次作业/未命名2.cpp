//第九题 函数 
#include <iostream>
#include <math.h>
using namespace std;
int S(int a,int b,int c)
{int s=(a+b+c)/2;
int area=sqrt(s*(s-a)*(s-b)*(s-c));
return area;
} 
int main(void)
{int a,b,c;
cin>>a>>b>>c;
cout<<"面积为"<<S(a,b,c);
return 0; 
}
//第九题 宏 
#include<iostream>
#include<math.h>
using namespace std;
#define s (a+b+c)/2
#define S(a,b,c) sqrt(s*(s-a)*(s-b)*(s-c))
int main(void)
{int a,b,c;
cin>>a>>b>>c;
cout<<"面积为"<<S(a,b,c);
}

