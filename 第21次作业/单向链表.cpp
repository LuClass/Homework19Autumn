using namespace std;
#include <iostream>
struct node{ //结点类型
	unsigned num; //序号
	node *next; //指向下一个结点的指针
};
node *create(int a[]){ //创建 n 个结点形成的链表
	node *head = NULL,*rear = NULL;
	int n = sizeof(a);
	for(unsigned i = 0; i < n; i++){
		node *p = new node{a[i], head};
		if(head == NULL){ //是否为第一个结点
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
//	int n=sizeof(a);
//	for(unsigned i = 0; i < n; i++){
//		cout << rear->num <<endl;
//		rear = rear -> next;
//	}
//	
}
void del(node *head, unsigned n){
	node *fore = head, *hind = head;
	node *p = fore; //fore 指向要移出的结点
	hind->next = fore->next; //跳过要被移出的结点
	fore = fore->next; //fore 前移
	delete p; //移出结点，先输出结点编号
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
	int a[100];    //int型数组用于存储输入变量
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
