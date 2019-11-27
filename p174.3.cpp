using namespace std;
#include<iostream>
struct fs{
	int a;
	int b;
};
struct fss
{
	int c;
	int d;
};
fs huajian(int a,int b)
{
	fs f;
	if(a==0){
	f.a=0;
    f.b=1;	
		return f;
	}
	for(int i=2;i<=b;i++)
	{
		if(a%i==0&&b%i==0){
			a=a/i;
			b=b/i;
			i--;
		}
    }
    f.a=a;
    f.b=b;
    return f;
	
}
fss huajian1(int c,int d)
{
	fss s;
	if(c==0){
	s.c=0;
	s.d=1;	
		return s;
	}
	for(int i=2;i<=d;i++)
	{
		if(c%i==0&&d%i==0){
			c=c/i;
			d=d/i;
			i--;
		}
    }
    s.c=c;
    s.d=d;
    return s;
	
}
void bijiao(int x,int y,int i,int j)
{
	
	if(((x*1.0)/(y*1.0)-(i*1.0)/(j*1.0))>0)
	cout<<x<<"/"<<y<<">"<<i<<"/"<<j;
	if(((x*1.0)/(y*1.0)-(i*1.0)/(j*1.0))==0)
	cout<<x<<"/"<<y<<"="<<i<<"/"<<j;
    if(((x*1.0)/(y*1.0)-(i*1.0)/(j*1.0))<0)
	cout<<x<<"/"<<y<<"<"<<i<<"/"<<j;
}

void he(int x,int y,int i,int j)
{
	float q;
	q=(x*1.0)/(y*1.0)+(i*1.0)/(j*1.0);
	cout<<q;
}
void cha(int x,int y,int i,int j)
{
	float q;
	q=(x*1.0)/(y*1.0)-(i*1.0)/(j*1.0);
	cout<<q;
}


void ji(int x,int y,int i,int j)
{
	float q;
	q=((x*1.0)/(y*1.0))*((i*1.0)/(j*1.0));
	cout<<q;
}
int shang(int x,int y,int i,int j)
{
	float q;
	if(i==0)
	{
	cout<<"分母为零";
	return 0;
	}
	q=((x*1.0)/(y*1.0))/((i*1.0)/(j*1.0));
	cout<<q;
}


int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	fs f=huajian(a,b);
	fss s=huajian1(c,d);
	cout<<f.a<<"/"<<f.b<<endl;
	cout<<s.c<<"/"<<s.d<<endl;
	bijiao(f.a,f.b,s.c,s.d);
	cout<<endl;
	cout<<"两分数的和为";
	he(f.a,f.b,s.c,s.d);
	cout<<endl;
	cout<<"两分数的差为";
	cha(f.a,f.b,s.c,s.d);
	cout<<endl;
	cout<<"两分数的积为";
	ji(f.a,f.b,s.c,s.d);
	cout<<endl;
	cout<<"两分数的商为";
	shang(f.a,f.b,s.c,s.d);
	cout<<endl;
}