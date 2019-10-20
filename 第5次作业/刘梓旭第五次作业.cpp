T2
#include<iostream>
using namespace std;
int main ()
{long int i,n;
cout<<"请输入当月利润"<<endl;
cin>>i;
    switch(i/100000){
     case 0:n=i*0.1;
     break;
     case 1:n=(i-100000)*0.075+10000;
     break;
     case 3:
     case 2:n=(i-200000)*0.05+17500;
     break;
     case 5:
     case 4:n=(i-400000)*0.03+27500;
     break;
     case 7:
     case 8:
	 case 9:	
	 case 6:n=(i-600000)*0.015+33500;
	 break; 
	 default:n=(i-1000000)*0.01+39500;
}
 cout<<"应发放奖金总数为"<<n<<"元"<<endl;
 return 0;
}

T4
#include<iostream>
using namespace std;
int main (){
	int y,m,d,x;
cout<<"请按顺序输入年月日"<<endl;
cin>>y>>m>>d;
 switch(m){
 	case 1:x=0;
 	break;
 	case 2:x=31;
 	break;
 	case 3:x=59;
 	break;
 	case 4:x=90;
 	break;
 	case 5:x=120;
 	break;
 	case 6:x=151;
 	break;
 	case 7:x=181;
 	break;
 	case 8:x=212;
 	break;
 	case 9:x=243;
 	break;
 	case 10:x=273;
 	break;
 	case 11:x=304;
 	break;
 	case 12:x=334;
 } 
  x=x+d;
  if(y%400==0||(y%4==0&&y%100==!0))
   if(m>=3)
   x+=1;
   cout<<"It is the"<<x<<"th day"<<endl;
   return 0;
}

T6
#include<iostream>
using namespace std;
int main(void)
{
	
	cout<<"   ** \n";
	cout<<" **  **\n";
	cout<<"**    *\n";
	cout<<"*     \n";
	cout<<"*     \n";
	cout<<"**    *\n";
	cout<<" **  **\n";
	cout<<"   ** \n";
	return 0;
}

T8
#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
	for(int b=1;b<=9;b++)
	{
		for(int a=1;a<=b;a++)
		{
			cout<<a<<"*"<<b<<"="<<setw(2)<<a*b<<"  ";
		}
		cout<<endl;
	}
	return 0;
}

T10
#include<iostream>
using namespace std;
int main(void)
{
	int i,j;
	 cout<<"\1\1\n";
  for(i=1;i<11;i++)
  {
    for(j=1;j<=i;j++)
      
	  cout<<"\4\4";
      cout<<"\n";	
}
return 0;
}
