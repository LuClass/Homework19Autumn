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
struct Fraction{
	int a,b;
	void yuefen(Fraction *m)
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
	bool FisQ(Fraction p,Fraction q)
	{
		yuefen(&p);
		yuefen(&q);
		return (p.a == q.a && p.b == q.b);
	}
	Fraction Plus(Fraction x,Fraction y)
	{
		Fraction result;
		result.b = x.b  * y.b;
		result.a = x.a * y.b + x.b * y.a ;
		yuefen(&result);
		return result;
	}
	Fraction subtract(Fraction x,Fraction y)
	{
		Fraction result;
		result.b = x.b  * y.b;
		result.a = x.a * y.b - x.b * y.a ;
		yuefen(&result);
		return result;
	}
	Fraction multiply(Fraction x,Fraction y)
	{
		Fraction result;
		result.b = x.b  * y.b;
		result.a = x.a * y.a;
		yuefen(&result);
		return result;
	}
	Fraction division(Fraction x,Fraction y)
	{
		Fraction result={0};
		if(y.a == 0)
		return result;
		result.b = x.b  * y.a;
		result.a = x.a * y.b;
		yuefen(&result);
		return result;
	}
	void input(Fraction *n)
	{
		cin >> n->a;
		cout << "-\n";
		cin >> n->b;
	}
};
int main()
{
	Fraction x,y,result;
	char temp;
	while(1)
	{
		cout << "先输入分子，按enter再输入分母\n";
		result.input(&x);
		cout << "输入第二个分数\n";
		result.input(&y);
		y: cout << "加：+,减：-,乘：*,除：/\n";
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
		while(getchar()!='\n');
	}
}
