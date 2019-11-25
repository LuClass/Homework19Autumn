#include<iostream>
using namespace std;
int getSet(int rs[],const int a[],int n)
{                            
	int i,t,m=0,s;
    for(s=0;s<=n-1;s++)
   {
   	t=0;
	  for(i=0;i<m;i++)
	  {
		  if(a[s]==rs[i])
		  t=1;
	  }
	  if(t==0)   rs[m]=a[s];
  	  else       continue;
      m++;
   }
   
}

int times(int rs[],const int a[],int n)
{
	int i,t,k,m=0,s,count=0,q=0,T[n],j,p;
    for(s=0;s<=n-1;s++)
   {
   	t=0;
	  for(i=0;i<m;i++)
	  {
		  if(a[s]==rs[i])
		  t=1;
	  }
	  if(t==0)   rs[m]=a[s];
  	  else       continue;
  	  m++;                 //元素个数 
   }
   for(k=0;k<m;k++)
   {
   	 for(s=0;s<n;s++)
   	 {
   	 if(rs[k]==a[s])
   	 count++;
     }
     T[q]=count;q++;      // 出现次数 
     count=0;
   }
   cout<<endl;
   
   for(i=0;i<m-1;i++)  //冒泡排序 
  for(j=0;j<m-1;j++)
  if(T[i]<T[i+1])
  {
  	p=T[i];T[i]=T[i+1];T[i+1]=p;
  	p=rs[i];rs[i]=rs[i+1];rs[i+1]=p;
  }

   for(i=0;i<m;i++)
   cout<<rs[i]<<":"<<T[i]<<endl;;
}


int main(void)
{
	int n;cin>>n;
	int a[n],i,rs[n],T[n];
	for(i=0;i<n;i++)
	cin>>a[i];
    times(rs,a,n);
}
