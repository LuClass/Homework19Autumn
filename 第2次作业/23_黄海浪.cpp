#include<iostream>
using namespace std;

/*
 *黄海浪 9181040G0818
 *2019.09.27
 *第 2 次作业 
 */

int main(){

	{// T23:
	cout<<"T23:"<<endl;
	int x = 122;
	if(!(x%2)&&x>2) cout<<"x为偶数且 x > 2"<<endl;
	}

	{// T24:
	cout<<"T24:"<<endl;
	int x = -12;
	if( x > 8 || x < -8 ) cout<<"|x| > 8"<<endl; 
	}

	{// T25:
		//A:	0
		//B:	0.333333
		//C:	1
		//D:	7
	}

	{// T26:
		//A:	4
		//B:	27
		//C:	8
		//D:	162
	}

	{// T27:
		//A:	1
		//B:	1
		//C:	31
		//D:	1(错误)  ->  0(答案） cout<<( ('a'== ('b' <= 3) ) &5);
	}

	{// T28:
	cout<<"T28:"<<endl;
	double c;
	cin>>c;
	cout<<"华氏温度: "<<c*9.0/5+32<<endl;
	cout<<"绝对温度: "<<c+273.15<<endl;
	}

	return 0;
}
