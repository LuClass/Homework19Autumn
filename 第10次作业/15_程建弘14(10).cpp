/*
(10)报数游戏。 21 个人围成一个圈，编号依次为 1～21。
从第 1 号开始从 1 开始报数，报到 5 的倍数的人离开，
一直报下去直到最后只剩下 1 人，求出此人的编号。
*/
#include<iostream>
using namespace std;
bool hashtable[21];
int main(){
	int pos=0,sum=0,num=21;
	while(num>=1){
		if(!hashtable[pos]){
			sum++;
			if(sum%5==0){
				hashtable[pos]=1;
				num--;	
			}	
		}
		pos=(pos+1)%21;
	}
	cout<<"最后剩下编号为："<<pos+1<<endl;
}

  
