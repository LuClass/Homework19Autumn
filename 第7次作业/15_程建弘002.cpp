/*
题目：企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，奖金可提10%；利润高
　　　于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可可提
　　　成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；40万到60万之间时高于
　　　40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，高于
　　　100万元时，超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？
1.程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成长整型。　　　
*/



#include<iostream> 
using namespace std;
int sum[10]={100000,200000,400000,600000,1000000};
int main()
{
	cout<<"请输入要计算的金额"<<endl;
	long int i;
	int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
	cin>>i;
	bonus1=100000*0.1;
	bonus2=bonus1+100000*0.75;
	bonus4=bonus2+200000*0.5;
	bonus6=bonus4+200000*0.3;
	bonus10=bonus6+400000*0.15;
	int cas;
	for(int k=0;k<10;k++){
		if(i<=sum[k]){
			cas=k;
			break;
		}
	}
 
	switch(cas){
		case 0:	bonus=i*0.1;
		break;
		case 1: bonus=bonus1+(i-100000)*0.075;
		break;
		case 2: bonus=bonus2+(i-200000)*0.05;
		break;
		case 3: bonus=bonus4+(i-400000)*0.03;
		break;
		case 4:bonus=bonus6+(i-600000)*0.015;
		break;
		case 5:bonus=bonus10+(i-1000000)*0.01;
		break;
		default:cout<<"输入错误"<<endl; 
		break;	
	} 
	cout<<"bonus="<<bonus;
}
