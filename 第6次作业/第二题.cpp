#include<iostream.h>
int fun1(int n)
{   if(n==0)
        return 1;
    else
		return n*fun1(n-1);
}
double fun2(int a,int b)
{   int i,j,k;
    i=fun1(a);
	j=fun1(b);
    k=fun1(a-b);
	return i/j/k;
}
void main()
{   cout<<fun2(4,2)<<'\t'<<fun2(6,4)<<'\t'<<fun2(8,7);
}