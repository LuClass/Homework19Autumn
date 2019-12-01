using namespace std;
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
main(){
	int n;
	cin>>n;
	char a[n][20];
	for(int i=0;i<=n;i++)
	    gets(a[i]);
     int num=0,t=0;
     char b[n][20];
     int s[n];
     for(int i=1;i<=n;i++){
     	int y=0;
     	for(int m=i-1;m>=0;m--)
	     if(strcmp(a[i],a[m])==0) y=1;
	     if(y) continue;
	     int k=1;
          for(int j=i+1;j<=n;j++)
             {   
             	if(strcmp(a[i],a[j])==0)
             	   k+=1;
			 }
			   s[t]=k;
			   strcpy(b[t],a[i]);
			   t++;
        }
       for(int i=0;s[i+1];i++)
           {
          for(int j=i+1;s[j]; j++){	  
            if(s[i]<s[j])    
            {
                int temp1;char temp2[n][20];        
                  temp1=s[i];
				  strcpy(temp2[0],b[i]);
				  s[i]=s[j];
				  strcpy(b[i],b[j]);
				  s[j]=temp1;
				  strcpy(b[j],temp2[0]);   
            }; 
	}
}
	cout<<"字符串为："<< setw(10)<<"出现次数为："<<endl;
	for(int i=0;s[i];i++)  cout<<b[i]<<setw(10)<<s[i]<<endl;
	return 0;

}
