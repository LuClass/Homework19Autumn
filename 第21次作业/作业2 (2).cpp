#include <iostream>
using namespace std;
struct node{
	unsigned num; 
	node *next;
};	
node *create(int n){
	node *head=NULL,*rear=NULL;
	for (unsigned i=0;i<n;i++){
		node *p=new node{i+1,head};
		cin>>p->num;
		if (head==NULL){
			head=p;
			rear=p;
		}else{
			rear->next=p;
			rear=p;
		}
	}
	return head;
}
void print(node *head,int n){
	node *fore=head,*hind=head;
	for(int i=1;i<=n;i++){
	cout<<fore->num<<" ";
	hind=fore;
	fore=fore->next;
}
}
node* del(node*head,unsigned n){
	node *fore=head,*hind=head;int i=1;
	while(i<=n){
		if(fore->num!=n){
		hind=fore;
		fore=fore->next;
		}
		else {
			node*p=fore;
			hind->next=fore->next;
			fore=fore->next;
			delete p;
		}
		i++;
	}
	return head;
}
void destroy(node*head,int n){
node*fore=head,*hind=head;
for(int i=1;i<n;i++){
hind=fore;fore=fore->next;
node*p=fore;
delete p;
}
}
int main(){
	int n;node*head=NULL;cin>>n;
	head=create (n);
	print (head,n);
	del(head,n);
	cout<<endl;
	print (head,n-1);
	destroy (head,n-1);
}

