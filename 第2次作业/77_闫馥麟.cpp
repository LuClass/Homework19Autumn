/*第一次作业*/

/*P48,23
   x>2&&x%2=0  */

/*24
   fabs(x)>8  */

/*25
   (A) 0    (B) 0.3  (C) 3  (D) 7    */

/*26
   (A) 4    (B) 27  (C) 8  (D) 162    */  

/*27
   (A) 1    (B) 1  (C) 31  (D) 0    */

/*28   */

#include<iostream>
using namespace std;
int main (void)
{
	double c,f,k;
	cout<<"请输入摄氏温度"<<endl;
	while (cin>>c)
	f=c*9/5+32,k=c+273.15,
	cout<<"摄氏温度="<<c<<endl,
	cout<<"华氏温度="<<f<<endl,
	cout<<"绝对温度="<<k<<endl,
	cout<<'\n',
	cout<<"请输入摄氏温度"<<endl;
	return 0;
}