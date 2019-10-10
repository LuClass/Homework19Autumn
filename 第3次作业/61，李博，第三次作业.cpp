 #include<iostream>
 using namespace std;
 int main(void)
 {
 	int x,y,key=0;
 	cin>>x;

 	if (x>=0){ cout<<'0';y=x;}
 	else {cout<<'1';x=-x-1;y=x;key=1;}
 	for (int n=31;n>0;n--)
 	{

 		for(int a=1;a<n;a++)
 		{
 			x/=2;
 		}
 		x=x%2;
 		if (key==1) {x=!x;}
 		cout<<x;
 		x=y;
 	}

 	return 0;
 ｝
（6）
#include<iostream>
#include<math.h>
using namespace std;
	float a,b,c,temp;
	cin>>a>>b>>c;
	float x1,x2;
	temp=b*b-4*a*c;//判别式 
	if(temp>0){
		x1=(sqrt(temp)-b)/(2*a);//sqrt()平方根函数，加头文件 #include<math.h) 
		x2=(-sqrt(temp)-b)/(2*a);
		cout<<"有两个实根分别为："<<x1<<' '<<x2<<endl;
	}
	else if(temp==0){
		x1=(sqrt(temp)-b)/(2*a);
		cout<<"有一个实根："<<x1<<endl;
	}
	else{
		cout<<"无实根！"<<endl; 
	}
	return 0; 
} 
 