#include<iostream>
using namespace std;
struct node{
	unsigned num;
	unsigned a;
	node *next;
};
node *create(unsigned n){
	node *head=NULL,*rear=NULL;
	cout<<"create\n";
	cout<<"请输入"<<n<<"个整数：";
	for(int i=0;i<n;i++){
		node *p=new node;
		unsigned b;
		cin>>b;
		p->a=b;
		p->num=i+1;
		p->next=head;
		if(head==NULL){
			head=p;
			rear=p;
		}
		else{
			rear->next=p;
			rear=p;
		}
	}
	rear->next=head;
	return head;
}
void print(node *head){
	cout<<"print\n";
	node *p;
	p=head;
	while(1){
		cout<<"num="<<p->num<<"\ta="<<p->a<<"\tnext="<<p->next<<endl;
		p=p->next;
		if(p==head) break;
	}
}
void del(node *head,unsigned num){
	cout<<"del\n";
	node *p1=head,*p2=head;
	while(1){
		if(p1->num!=num){
			p2=p1;
			p1=p1->next;
		}
		else{
			node *p3=p1;
			p2->next=p1->next;
			p1=p1->next;
			delete p3;
			break;
		}
	}
}
void destroy(node *head){
	cout<<"destroy\n";
	node *p1=head->next;
	if(p1==head) delete head;
	else{
		while(p1->next!=head){
			node *p2;
			p2=p1;
			p1=p1->next;
			delete p2;
		}
		delete p1;
		delete head;
	}
}
int main(){
	unsigned n;
	cout<<"输入结点数n:";
	cin>>n;
	node *head=NULL;
	if(n>0) head=create(n);
	print(head);
	cout<<"输入想要删除的序号num:";
	int num;
	cin>>num;
	del(head,num);
	print(head);
	destroy(head);
	return 0;
}
