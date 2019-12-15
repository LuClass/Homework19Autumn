#include<iostream>
 using namespace std;
 #define N 5
 struct node{
 	unsigned num;
 	unsigned input;
 	node *next;
 };

 node *creat_list(unsigned n)
 {
    	node *head=NULL;
    	node *rear=NULL;
    for(int i=0;i<n;i++)
    {
      node *p=new node{i+1,i,head};
      cin>>p->input;
      p->num=i+1;
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

 void print_list(node *head,unsigned n)
 {
 	node *fore=head,*hind=head;
 	for(int i=0;i<n;i++)
 	{
 		cout<<"num"<<fore->num<<"  :  "<<fore->input<<endl;
 	    hind=fore;
 	    fore=fore->next;
 	}
 }

 node *del(node *head,unsigned n)
 {
 	int count;
 	cin>>count;
 	node *i=head,*o=head;
 	for(int i=0;i<n;i++)
 	{
 		if(count==fore->num)
 	  {
 	  	  node *p=i;
 	      o->next=i->next;
 	      i=i->next;
           delete p;
 	  }
 	    else
   	  {
 		  hind=fore;
 	      fore=fore->next;
 	  }
 	} 
 	return head;
 }

 void destroy(node *head)
 {
 	node *p=head;
 	node *de=NULL;
 	while(p)
 	{
 		de=p->next;
 		delete p;
 		p=de;
 	}
 	delete p;
 }

 int main()
 {
 	node *head=NULL;
 	head=creat_list(N);
 	print_list(head,N);
 	head=del(head,N);
 	print_list(head,N-1);
 	destroy(head);
 	return 0;
 }

