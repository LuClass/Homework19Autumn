#include<iostream>
 using namespace std;

 int main()
 {
 	char str[50],*p=str;
     int i,j=0,key=0,sum,a[100]={0};
 	cin.getline(str,50);
 	for(i=0;*(p+i)!='\0';i++)
 	{ 
 		if((*(p+i)>='0')&&(*(p+i)<='9'))
 		{
 			sum=j+1;
 			a[j]=a[j]*10+*(p+i)-'0';
 			key=1;
 		}
 		else if(key)
 		{
    			a[++j]=0;
 			key=0;
 		}
 	}
 	cout<<"整数的个数为：" <<sum<<endl;
 	cout<<"这些整数依次输出如下："<<endl;
 	for(i=0;i<sum;i++)
 		cout<<a[i]<<endl;
 	return 0;	
 }
