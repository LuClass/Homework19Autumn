#include<iostream>
using namespace std;

/*
 *�ƺ��� 9181040G0818
 *2019.09.27
 *�� 2 ����ҵ 
 */

int main(){

	{// T23:
	cout<<"T23:"<<endl;
	int x = 122;
	if(!(x%2)&&x>2) cout<<"xΪż���� x > 2"<<endl;
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
		//D:	1(����)  ->  0(�𰸣� cout<<( ('a'== ('b' <= 3) ) &5);
	}

	{// T28:
	cout<<"T28:"<<endl;
	double c;
	cin>>c;
	cout<<"�����¶�: "<<c*9.0/5+32<<endl;
	cout<<"�����¶�: "<<c+273.15<<endl;
	}

	return 0;
}
