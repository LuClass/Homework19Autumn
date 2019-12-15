#include <iostream>
using namespace std;
struct node{ 
	unsigned num; 
	node *next; 
};
node *create(int a[]){ 
	node *head = NULL,*rear = NULL;
	int n = sizeof(a);
	for(unsigned i = 0; i < n; i++){
		node *p = new node{a[i], head};
		if(head == NULL){ 
			head = p;
			rear = p;
		}
		else{
			rear -> next = p;
			rear = p;
		}
	}
	rear -> next = NULL;
	return head;
}
void print(node *head){
	node *rear=NULL;
	rear=head;
	while(rear!= NULL){
		cout << rear->num <<endl;
		rear = rear -> next;
	}
} 
void del(node *head, unsigned n){
	node *fore = head, *hind = head;
	node *p = fore; 
	hind->next = fore->next; 
	fore = fore->next; 
	delete p; 
}
void destroy(node *head){
	node *fore = head, *hind = head;
	while(fore->next!=NULL){

		hind = fore->next;
		delete(fore);
		fore = hind;
	}
	delete(fore);
} 
int main(){
	
	int a[100];    
	int i=0;
	int n,m;
	cin >> n;
	while (i<n){
	    cin >> a[i];
	    i++;
	}
	node * head = NULL;
	head = create(a);
	print(head);
	cout <<"输入要删除的链表序号："<<endl;
	cin >> m; 
	del(head,m);
	destroy(head);
	return 0;
}

