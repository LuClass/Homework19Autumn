using namespace std; 
#include <iostream>
struct node{ 
    unsigned num; 
    node *next;
};
node *create(unsigned n)
{ 
    node *head = NULL,*rear = NULL;
    unsigned int res[n];
	for(int j=0;j<n;j++)
	{
		cin>>res[j];
	}
    for(unsigned i = 0; i < n; i++)
	{
        node *p = new node{res[i], head};
        if(head==NULL){ 
            head=p;
            rear=p;
        }
		else
		{ 
            rear->next=p; 
            rear= p;
		}       
    }
    rear->next = 0;
	return head;
}
void print(node *str)
{
	node *p=str;
	while(p)
	{
		cout<<p->num<<" ";
		p=p->next;
	}
	cout<<endl;
}
node *del(node *head,unsigned num)
{
	node *p1,*p2;
	p1=p2=head;
	while(p1!=0&&p1->num!=num)
	{
		p2=p1;
		p1=p1->next;
	}
	if(p1==head)
	{
	    head=p1->next;
	} 
	else
	{
	    p2->next=p1->next;	
	} 
	delete p1;
	return head;
}
void destroy(node *head)
{
    node *p3=head;
    node *p4=head;
	while(p4)
	{
		p3=p4;
		delete p3;
		p4=p4->next;
	}	
}
int main()
{
	unsigned n;
	cin>>n;
	node *head=create(n);
	print(head);
	cout<<"É¾³ýµÄÊý:" ;
	unsigned m;
	cin>>m;
	head=del(head,m);
	print(head); 
	destroy(head);
	return 0;
}

