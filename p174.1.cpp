using namespace std;
#include<iostream>
#include<math.h>
struct solution
{
	int numofsolution;
	float s1;
	float s2;
};
solution jfc(int a,int b,int c)
{
	solution s;
    if(a==0)
    {
    	s.numofsolution=1;
    	s.s1=-c/b*1.0;
    	s.s2=-c/b*1.0;
    	return s;
	}
	
	if(a!=0)
	{
		if((b*b-4*a*c)>0)
		{
		s.numofsolution=2;
		s.s1=((-b+sqrt(b*b-4*a*c))/(a*2.0));
	    s.s2=((-b-sqrt(b*b-4*a*c))/(a*2.0));
		    return  s;
		}
		if((b*b-4*a*c)==0)
		{
			s.numofsolution=1;
			s.s1=(-b/(a*2.0));
			s.s2=(-b/(a*2.0));
		    return  s;
		}
		if((b*b-4*a*c)<0)
		{
			s.numofsolution=0;
			s.s1=0;
			s.s2=0;
		    return  s;
		}
	
	}
}
int main()
{ 
    int a,b,c;
    cin>>a>>b>>c;
	solution s=jfc(a,b,c);
	
	
    cout<<s.numofsolution<<endl;
    cout<<s.s1<<endl;
    cout<<s.s2<<endl;
 	return 0;

}
