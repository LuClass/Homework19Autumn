#include <iostream>
using namespace std;
#define N 100
int main ()
{
	char p[N];
	char a[N][N];
	int count=0,m=0,j=0,k=0,i;
	cin.getline(p,N);
	for(i=0;p[i]!=0;i++)
	{
	 if(p[i]<'0'||p[i]>'9')
	 m=0;
	 else if(m==0)
	 {
	 	m=1;
	 	count++;
	 }
	} 
	cout<<count<<endl;
	 for(int i=0;p[i]!='\0';i++)
	{
		if(p[i]>='0'&&p[i]<='9')
		{
        a[j][k]=p[i];
        k++;
        if(p[i+1]<'0'||p[i+1]>'9')
        {
        a[j][k]='\0';
		k=0;
        j++;
        }
        }
	}
	for(int i=0;i<count;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

#include <iostream>
using namespace std;
struct node{
	unsigned num;
	node * next;
};
node *p,*head,*rear;
int x;
node * create(unsigned n)
{
	node * head=NULL,* rear=NULL;
	for(unsigned i=0;i<n;i++)
	{
		node * p=new node;
		if(head==NULL)
		{
			head=p;
			rear=p;
		}
		else
		{
			rear->next=p;
			rear=p;
		}
	}
	return head;
}
void print()
{	
     p=head->next;
     while(p->next!=NULL)
	{
		cout<<p->num<<" ";
		p=p->next;
	}
	cout<<p->num<<endl;
}
void del(node *head,unsigned n)
{
	unsigned deleted=0;
	node *fore=head,*hind=head;
	while(deleted<n)
	{
		for(int i=0;i<n;i++)
		{
			node *p=fore;
			hind->next=fore->next;
			fore=fore->next;
			delete p;
			deleted++;
		}
	}
}
void destroy()
{
	delete []p;
	delete []head;
}
int main ()
{
	unsigned n;
	cin>>n;
	cin>>x;
	head=new node;
	rear=head;
	while(x!=-1)
	{
		p=new node;
		p->num=x;
		p->next=NULL;
		rear->next=p;
		rear=p;
		cin>>x;
	}
	create(n);
	print();
	del(head,n);
	destroy();
	return 0;
}
