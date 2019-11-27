/* 918107820336 36_郑文浩 第一次作业 
作业内容 23,24,25,26,27,28（1）*/
/*23 */
/*T23    x>2 && x%2==0   */
/*T24    x>8 || x<-8     */
/*T25   (A)0
        (B)0.333333
		(C)1
		(D)7    */
/*T26   (A)4
        (B)27
		(C)8
		(D)162  */
/*T27   (A)1
        (B)1
		(C)31
		(D)0    */
//T28
#include<iostream>
using namespace std;
int main() {
	float C, F, K;
	cout << "输入的摄氏温度：";
	cin >> C;
	F = C * 1.8 + 32;
	K = C + 273.15;
	cout << "该温度对应的华氏温度:" << F << endl;
	cout << "该温度对应的绝对温度:" << K << endl;
	return 0;

}