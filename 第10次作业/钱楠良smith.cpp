using namespace std;
#include <iostream>
bool ss(int x){
	if (x==2)
	{
	return true;
	}
	else{
		 for(int i=2;i<x;i++)
		 {
		 	if (x%i==0)
		 	return false;
		 }
		  return true;
		
		}
}



bool issmith(int x){
	int sum=0,sum1=0,z=x,i=2;
	for(;i<=z;i++)
	{
		if (z%i==0&&ss(i)==1)
		{    z=z/i;
			for(int j=10;i>0;i=i/10)
		    {
		    	sum+=i%j;
		    }
		  
		  i=1; 
		}
	}
	for(int k=10;x>0;x=x/10)
	{
		sum1+=x%k;
	}
	if (sum==sum1)
	return true;
	else return false;
}


int main(){
	
	for(int x=4937774;;x++)
     {
      if(ss(x)==0){
     	if (issmith(x)==1)
     	{cout<<"下一个smith数为"<<x;
     	break;
     	}
      }
     }
     return 0;
}