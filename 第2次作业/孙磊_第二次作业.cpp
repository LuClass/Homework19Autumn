//9月27日周五，第二次作业 

//23.
/*int x;
if(x>2&&x%2==0)
*/

//24.
/*
int x;
if(fabs(x)>8)//加头文件#include<math.h> 
*/

//25.
/*
A.	0
B.	0.33333
C.	1
D.	7
*/

//26.
/*
A.	4
B.	27
C.	8
D.	162
*/

//27. 
/*
A.	0
B.	1
C.	31  //6==000110  25==001111  6<<2 == 011000  按位或得011111==31 
D.	0
*/

//28.(1)
#include<iostream>
using namespace std;
int main()
{
	float c,f,k;
	cout<<"请输入当前摄氏温度c:" <<endl;
	cin>>c;
	f=c*9/5+32;
	k=c+273.15;
	cout<<"当前华氏温度为："<<f<<endl;
	cout<<"当前绝对温度为："<<k<<endl; 
	return 0;
}





