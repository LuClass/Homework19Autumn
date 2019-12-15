using namespace std;
#include <iostream>
struct node{ 
unsigned num;
int value;
node *next; 
 
};
node *create(unsigned n){ 
int x;
node *head = NULL,*rear = NULL;
for(unsigned i = 0; i < n; i++)
{
	cin>>x;
    node *p = new node{i+1,x,head};
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
rear->next = head;
return head;
}
void print(node *head)
 {
 	cout<<endl<<"print:"<<endl;
 	node *now=head;
 	while(now->next!=head)
 	{
 		cout<<now->num<<"  "<<now->value<<"  "<<endl;
 		now=now->next;
 	}
 	cout<<now->num<<"  "<<now->value<<"  "<<endl;	

 }

 void del(node *head,unsigned n)
 {
 	node *now=head,*fore=NULL;
 	while(now->num!=n)
 	{
 		fore=now;
 		now=now->next;
 	}	
 	fore->next=now->next;
 	delete now;	
 }

 void destroy(node *head)
 {
 	node *now=head,*fore=NULL;	
 	while(now->next!=head)
 	{
 		fore=now;
 		now=now->next;
 		delete fore;
 	}
 	delete now;	
 }

 int main(void)
 {
 	int n;
 	cin>>n;
 	node *head=create(n);
 	print(head);
 	del(head,3);
 	print(head);
 	destroy(head);
 	return 0;
 }













