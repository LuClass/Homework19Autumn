#include <iostream>
#include<cmath>
#include<string.h>
#include<iomanip>
using namespace std;
// int main()
// {
// 	int num=0;
// 	char char_input[1000];
// 	cin>>char_input;
// 	for(int i=0;i<strlen(char_input);i++)
// 		if(isdigit(char_input[i]))
// 			num++;
// 	printf("the string contain %d number(s) ",num);	
// 	system("pause");
// 	return 0;
// }


//下一题
// int main()
// {
// 	int top[20]={1,3,5,8,13},bottom[20]={2,2,3,5,8};
// 	for(int i=5;i<20;i++)
// 	{
// 		top[i]=bottom[i-1]+top[i-1];
// 		bottom[i]=top[i-1];
// 	}
// 	for(int i=0;i<20;i++)
// 		printf("%d/%d ",top[i],bottom[i]);
// 	system("pause");
// 	return 0;
	

// }
//下一题
int main()
{
	int num;
	printf("now please input the number:");
	scanf("%d",&num);
	for(int i=1;i<num;i++)
	{
		if(num%i==0)
			printf("%d ",i);
	}
	printf("\n1~100 has Perfect number:1 ");
	for(int i=2;i<=100;i++)
	{
		int sum=0;
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
				sum+=j;
		}
		if(sum==i)
			printf("%d ",i);
	}
	system("pause");
	return 0;
}