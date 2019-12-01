P48  23  24  25  26   27  28(1)
23. x>2&&x%2==0?1:0
24. x>8||x<-8?1:0
25.(A):  0
   (B):  0.333333
   (C):  1
   (D):  7
26.(A):  4
   (B):  27
   (C):  8
   (D):  162
27.(A):  1
   (B):  1
   (C):  31
   (D):  0
28.
#include <iostream>
using namespace std;
int main (void)
{
    float C,F,K;
    cout<<"摄氏温度C=";
    cin>>C;
    F=C*1.8+32.0;
	K=C+273.15;
    cout<<"华氏温度F="<<F<<endl;
    cout<<"绝对温度K="<<K<<endl;
    return 0;
}

