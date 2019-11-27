/*23:	x>2&&x%2==0  */ 
/*24:	x<-8||x>8  */ 
/*25:	0	0.333333   1   7  */ 
/*26:	4	27	8   162  */  
/*27:	1	1	31	0  */ 

#include <iostream> 
using namespace std;
int main(void)
{
	float K,F,C;
	cout<<"请输入想要转换的摄氏温度："; 
	cin>>C;
	F=C*(9/5) +32;
	cout<<"华氏温度F="<<F<<endl;
	K=C+273.15;
	cout<<"绝对温度K="<<K<<endl;
}
