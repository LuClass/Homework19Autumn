#include<iostream>
using namespace std;
int gys(int j,int k)
{
	int temp;
	if(j < k){
		temp = k;
		k = j;
		j = temp;
	}
	while(temp = j % k)
	{
		j = k;
		k = temp;
	}
	return k;
}
struct Fun{
	int a,b;
	void yuefen(Fun *m)
	{
		bool sign = false;
		int yinsu;
		if(m->a == 0)
		{
			m->b = 1;
			return ;
		}
		if(m->a < 0)
		{
			m->a *= -1;
			sign = true;
		}

		while((yinsu = gys(m->a,m->b)) != 1)
		{
			m->a /= yinsu;
			m->b /= yinsu;
		}

		if(sign)
		{
			m->a *= -1;	
		}
	}
	bool FisQ(Fun p,Fun q)
	{
		yuefen(&p);
		yuefen(&q);
		return (p.a == q.a && p.b == q.b);
	}
	Fun Plus(Fun x,Fun y)
	{
		Fun result;
		result.b = x.b  * y.b;
		result.a = x.a * y.b + x.b * y.a ;
		yuefen(&result);
		return result;
	}
	Fun subtract(Fun x,Fun y)
	{
		Fun result;
		result.b = x.b  * y.b;
		result.a = x.a * y.b - x.b * y.a ;
		yuefen(&result);
		return result;
	}
	Fun multiply(Fun x,Fun y)
	{
		Fun result;
		result.b = x.b  * y.b;
		result.a = x.a * y.a;
		yuefen(&result);
		return result;
	}
	Fun division(Fun x,Fun y)
	{
		Fun result={0};
		if(y.a == 0)
		return result;
		result.b = x.b  * y.a;
		result.a = x.a * y.b;
		yuefen(&result);
		return result;
	}
	void input(Fun *n)
	{
		cin >> n->a;
		cout << "-\n";
		cin >> n->b;
	}
};
int main()
{
	Fun x,y,result;
	char temp;
		result.input(&x);
		
		result.input(&y);
		y: cout << "¼Ó£º+,¼õ£º-,³Ë£º*,³ı£º/\n";
			while(getchar()!='\n');
		temp = getchar();
		switch(temp)
		{
			case '+':result = result.Plus(x,y);break;
			case '-':result = result.subtract(x,y);break;
			case '*':result = result.multiply(x,y);break;
			case '/':result = result.division(x,y);break;
			default :goto y;break;
		}
		cout << result.a <<'/'<<result.b<<endl;
	
}