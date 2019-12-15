#include <bits/stdc++.h>
using namespace std;

enum operation{create_List=1,print_List,insert_Node,delete_Node,delete_List,quit};//枚举类型，用于菜单选择结果

struct  node{
    int data ;
    node * next;
};

operation  Menu();

node * CreateList( );
void  PrintList( node *);
node * InsertNode(node *,node *);
node * DeleteNode(node *,int);
node * deleteList(node *head);

void Create();
void Print( );
void Insert( );
void Delete( );
void DeleteAll();


int n=0;
node * head=NULL ;

int main()
{
  operation menu_choice;

  do
  {
   menu_choice=Menu();
   switch(menu_choice)
   {
      case create_List: cout<<"1 创建链表"<<endl<<endl;
		                Create( );
					    break;
	  case  print_List: cout<<"2 遍历链表"<<endl<<endl;
                       Print();
					   break;
      case  insert_Node: cout<<"3 插入链表结点"<<endl<<endl;
                       Insert();
					    break;
	  case  delete_Node: cout<<"4 删除链表结点"<<endl<<endl;
                       Delete();
					    break;
      case  delete_List: cout<<"5 删除整个链表"<<endl<<endl;
                       DeleteAll();
					    break;
	  case quit :
	  default:   cout<<"退出链表操作 "<<endl;
		        return 0;

   }

  }while(menu_choice!=quit);

  return 0;
}

/*创建链表*/
node * CreateList( )
{ node * s, * p ;
  s = new node ;
   cout<<"第"<<n+1<<"个结点"<<endl;
  cin >> s->data ;
  head = NULL ;
  if( s->data==0)
  {
	  cout<<"您建立的空链表"<<endl;
      delete  s ;
  }
  else
  {
	  while ( s->data != 0 )
	  { if ( head == NULL )   head = s ;
		 else  p->next = s ;
		p = s ;
		n=n+1;
		s = new node ;
		 cout<<"第"<<n+1<<"个结点"<<endl;
		cin >> s->data ;
	  }
	  p -> next = NULL ;
	  delete  s ;
	  cout<<"建立的链表中共有"<<n<<"个节点"<<endl<<endl;
  }
  return ( head ) ;
}

/*遍历链表*/
void  PrintList( node * head)
{    node *p=head;
     int i=1;
    if (head!=NULL)
        do
		{     cout<<"第"<<i++<<"个结点数据为:"<<p->data<<endl;
               p=p->next;
        }while(p!=NULL) ;
	else
	{
	  cout<<"链表是空链表 "<<endl;
	}
	 cout<<"链表中共有"<<n<<"个节点"<<endl;
}

/*插入结点*/
node * InsertNode(node *head,node * s){
    node *p,*q;
    p=head;
    if(head==NULL)
    { head=s;
    s->next=NULL;
    }
    else
    {while((s->data>p->data) && (p->next!=NULL))
        {q=p;
        p=p->next;
	}
    if(s->data<=p->data)
    {	  if(head==p)
        { head=s;
            s->next=p;
        }
        else
        { q->next=s;
            s->next=p;
        }
    }
    else
  {  p->next=s;
     s->next=NULL;
  }
 }
   n=n+1;
   return (head);
}

/*删除结点*/
node *DeleteNode(node *head,int delData)
{node *p,*q;
 p=head;
 if (head==NULL)
 {
   return(head);
 }
 while(delData!=p->data && p->next!=NULL)
 { q=p;
   p=p->next;
 }
  if(delData==p->data)
  { if(p==head)
       head=p->next;
    else q->next=p->next;
    cout<<"成功删除数据为"<<delData<<"的结点"<<endl;
    n=n-1;
 }
 else
	 cout<<"要删除的数据为"<<delData<<"的结点在链表中没有找到"<<endl;     //找不到该结点
 return(head);
}

/*删除整个链表*/
node * deleteList(node *head)
{
  node *p,*s;
  p=head;
  if(head==NULL)
	  cout<<"链表本身就为空链表";
  else
  {
	  while(p->next!=NULL)
	  {
	     s=p;
		 p=p->next;
		 delete s;
		 n--;
	  }
	  delete p;
	  n--;
      head=NULL;
  }
  cout<<"整个链表删除成功!"<<endl;
  return head;
}


/*菜单函数*/
operation  Menu()
{  int choice;
   cout<<endl<<endl;
   cout<<"链表操作菜单"<<endl;
   cout<<"1 创建链表"<<endl;
   cout<<"2 遍历链表"<<endl;
   cout<<"3 插入链表结点"<<endl;
   cout<<"4 删除链表结点"<<endl;
   cout<<"5 删除整个链表"<<endl;
   cout<<"6 退出"<<endl;

   cout<<endl<<endl<<"请输入功能序号";
   cin>>choice;
   return operation(choice);
}

void Create()
{
    if(head==NULL)
	{
	  head=CreateList( );
	}
	else
	{
	  cout<<"已创建过链表，不允许再次创建"<<endl;
	  cout<<"如果想重新创建，先删除原先链表"<<endl;
	}
}

void Print( )
{
   PrintList(head);
}

void Insert( )
{
  char IsGo;
  IsGo='y';
  cout<<endl<<"开始进行结点插入操作"<<endl;
  node *stu;
  while(IsGo=='y'||IsGo=='Y')
  {   stu=new node;
      cin>>stu->data;
	  head=InsertNode(head,stu);
	  cin>>IsGo;
  }
}

void Delete( )
{
   char IsGo;
   int del_num;
   IsGo='y';
   while(IsGo=='y'||IsGo=='Y')
   {
	   cin>>del_num;  //输入要删除的结点的数据
	   head=DeleteNode(head,del_num);    //删除后链表的头地址
	   cin>>IsGo;
   }
}

void DeleteAll()
{
  head=deleteList(head);

}
