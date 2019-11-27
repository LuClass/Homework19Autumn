#include<iostream>
using namespace std;
int b[999]={0},m=0;
int getSet(int rs[],const int a[],int n)
{
for(int i=0;i<n;i++)
    {if(b[a[i]]==0)
	{
    b[a[i]]++;
    rs[m]=a[i];
    m++;
	}
	else b[a[i]]++;
    }
    return m;
}
void cishu1(int rs[],int n)
{for(int i=0;i<n;i++)
cout<<rs[i]<<":"<<b[rs[i]]<<endl;
}
void paixu(int rs[],int n)
{int i,j,temp;
for(i=0;i<n;i++)
  {int max=b[rs[i]];
for(j=i;j<n-1;j++)
    {if(max<b[rs[j+1]])
         {      temp=rs[j];
 				rs[j]=rs[j+1];
 				rs[j+1]=temp;
        }
    }
   
  } for(int i=0;i<n;i++){
 		cout<<rs[i]<<":"<<b[rs[i]]<<endl;
  }
}
int main(){
 	int a[999]={3, 1, 2, 3, 1, 5, 2, 1},rs[999];
 	int m1=0,m2=0;
 	while(a[m1++]!=0){
 		m2++;
 	}
 	int num=getSet(rs,a,m2);
 	cout<<"集合中元素个数："<<num<<endl;
 	cout<<"各元素出现次数"<<endl;
 	cishu1(rs,num);
 	cout<<"降次排序后，各元素出现次数"<<endl;
 	paixu(rs,num);
 }

