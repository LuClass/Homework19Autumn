using namespace std; 
#include <iostream>
struct node{ 
    unsigned num; 
    node *next;
};
node *create(unsigned n,unsigned int res[])
{ 
    node *head = NULL,*rear = NULL;
    for(unsigned i = 0; i < n; i++)
	{
        node *p = new node{res[i], head};
        if(head == NULL)
		{ 
            head = p;
            rear = p;
        }
		else
		{ 
            rear -> next = p; 
            rear = p;
		}       
    }
    rear->next = 0;
	return head;
}
void print(node *str)
{
	node *p=str;   //头结点不能动，确保下次操作有效 
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
	while(p1!=0&&p1->num!=num)  //遍历 
	{
		p2=p1;           //p1前一个节点 
		p1=p1->next;
	}
	if(p1==head)
	{
	    head=p1->next;	//是头结点或者中间节点 
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
    node *p3=head->next;
    node *p4=head->next;
	while(head->next)
	{
		p3=p4;
		p4=p4->next;
		delete p3;
		head->next=p4;
	}	
}
int main()
{
	unsigned n;
	cin>>n;
	unsigned int *res=new unsigned int[n];
	for(int j=0;j<n;j++)
	{
		cin>>res[j];
	}
	node *head=create(n,res);
	print(head);
	head=del(head,4);
	print(head); 
	destroy(head);
	if(head->next==NULL)
	{
		cout<<"链表清空完成！"; 
	}
	delete res;
	return 0;
}
