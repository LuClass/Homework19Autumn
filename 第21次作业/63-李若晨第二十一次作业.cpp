1.
#include<iostream>
 #include<string.h>
 using namespace std;
 int main(void)
 {
 	char ch[50];
 	cin.getline(ch,50);
 	int len=strlen(ch),n,key=0;
 	for(int x=0;x<len;x++)
 	{
 		if(ch[x]>='0'&&ch[x]<='9')
 		{
 			if(key==0)
 			{
 				key=1;
 				n++;
 				continue;	
 			}
 			else			
 				continue;		
 		}
 		else
 			key=0;		
 	}
 	//cout<<n<<endl;
 	int *num=new int[n];
 	int k=0,count=0;
 	for(int x=0;x<=len;x++)
 	{
 		if(ch[x]>='0'&&ch[x]<='9')
 		{
 			if(key==0)
 			{
 				key=1;				
 				k=k*10+(ch[x]-48);
 				continue;	
 			}
 			else
 			{
 				k=k*10+(ch[x]-48);
 				continue;
 			}			

  		}
 		else
 		{
 			if(k)
 			{
 				num[count]=k;
 				count++;
 			}				
 			k=0;
 			key=0;
 		}					
 	}
 	for(int y=0;y<n;y++)
 		cout<<num[y]<<endl;
 	delete num;
 	return 0;
 }
 2.
 #include<iostream>
 #include<string.h>
 using namespace std;
  struct node
 {
 	unsigned num;
 	int value;
 	node *next;	
 	~node(){cout<<endl<<"delete struct No. "<<num;}
 };

  node *create()
 {
 	node *head=NULL,*rear=NULL;
 	int n,tmp;
 	cout<<"please set the number of value:";
 	cin>>n;
 	cout<<"input "<<n<<" value"<<endl;
 	for(int x=1;x<=n;x++)
 	{
 		cin>>tmp;
 		node *p=new node{x,tmp,head};
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
 	rear->next=head;
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
 	node *head=create();
 	print(head);
 	del(head,3);
 	print(head);
 	destroy(head);
 	return 0;
 }
