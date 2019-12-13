#include<iostream>
#include<string.h>
#define NUM 6
using namespace std;

struct node
{
	unsigned num;
	node *next;
};

node *create(unsigned n)
{
	node *head=NULL;
 	node *rear=NULL;
 	for(int i=0;i<n;i++)
	{
 		node *p=new node{i+1,head};
 		cin>>p->num;
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
	rear->next=NULL;
 	return head;
}

void print(node *L)
{
 	node *p=L;
 	if(!p){
 		cout<<"None"<<endl;
 		return;
 	}
 	while(p){
 		cout<<p->num<<" ";
 		p=p->next;
 	}
 	cout<<endl;
}

node *del(node *head,unsigned n)
{
	node *p,*temp;
	temp=head;
	p=head;
	while(temp)
	{
		if(temp->num==n)
		{
			p->next=temp->next;
			delete temp;
		}
		else
		{
			p=temp;
			temp=temp->next;
		}
	}
	return head;
}

void destroy(node *head)
{
 	if(head!=NULL)
	{
 		delete[] head;
 	}
 }

int main()
{
	unsigned n;	
	cin>>n;
 	node *htemp=NULL;
 	if(n>0)
	   htemp=create(n);
 	else 
	   return false;
	cout<<endl;
 	print(htemp);
 	cout<<endl;
 	htemp=del(htemp,NUM);
 	print(htemp);
}
