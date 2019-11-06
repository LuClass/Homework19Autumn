using namespace std;
#include <iostream>
int main()
{
	int b,circle[20],alive[20],index; // circle[] 0~20对应编号1~21 alive[] 0~20对应21个人 0:在圈内 1:在圈外 
	b=1;
	index=0; //下标 
	for(int i=0;i<21;i++)  
	{
		circle[i]=b;
		b=b+1;
	}
	for(int j=0;j<21;j++)
	{
		alive[j]=0;
	}
	for(int number=1;number<=101;number++) //报数 
	{
		while(alive[index]==1) 
		{
			index++;
			if(index%21==0)
			{
				index=0;
			}
		}
		if(number%5==0)
		{
			alive[index]=1;
		}
		index=(index+1)%21; //除不尽就加1;除尽即为0,开始新一轮 
	}
	for(int k=0;k<21;k++)
	{
		if(alive[k]==0) //寻找唯一一个在圈内的人的下标 
		{
			index=k;
			break;
		}
	}
	cout<<circle[index]; //输出编号 
	return 0;
} 
