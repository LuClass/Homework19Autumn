#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void getrandom(int a[],int n)
{	
	srand(time(NULL));
	for (int i = 0; i < n; i++)	
	{a[i] = rand() % 100;
	cout<<a[i]<<'\t';
    }
}


int main ()
{  int a[100],n;
   cin>>n;
    cout<<endl;
    getrandom(a,n);
     int maxvalue,maxindex;
       maxvalue=a[0];maxindex=0;
       for(int j=0;j<n-1;j++)
       {if(a[j]>a[j+1])
          {maxvalue=a[j];
           maxindex=j;
		  }
		else{maxvalue=a[j+1];
           maxindex=j+1;
		    }
	   }
	   cout<<"maxvalue="<<maxvalue<<endl;
	   cout<<"maxindex="<<maxindex<<endl;
    	
   
}
