/*

题目：打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数
　　　本身。例如：153是一个“水仙花数”，因为153=1的三次方＋5的三次方＋3的三次方。
1.程序分析：利用for循环控制100-999个数，每个数分解出个位，十位，百位。

*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int i,j,k;
	cout.setf(ios::left);
	cout<<"water flower'number is:"<<endl;
	for(int n=100;n<1000;n++){
		i=n/100;
		j=n/10%10;
		k=n%10;
		if((i*100+j*10+k)==i*i*i+j*j*j+k*k*k){
			cout<<setw(5)<<n;
		}
	}
	cin.get();
	
}
