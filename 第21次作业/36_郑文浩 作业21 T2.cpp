#include<iostream>
using namespace std;
struct node {
	int num;         //序号 
	node * next;          // 指向下一个结点的指针 
	int n;              // 存放的整数 
};
node *creat(unsigned n) {
	node *head = NULL, *rear = NULL;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		node *p = new node;
		p->n=temp;
		p->next=NULL;
		p->num=i+1; 
		if (head == NULL) {             //判断是否是第一个结点 
			head = p;
			rear = p;
		}
		else {
			rear->next = p;
			rear = p;
		}
	}
	return head;
}
void print(node *head, unsigned n) {
	node *fore = head;
	for (int i = 0; i < n; i++) {
		cout << "序号:" << fore->num <<"     " << "数值:" << fore->n << '\n';
		fore = fore->next;
	}
}
void del(node *head, unsigned m) {
	if (m != 1) {
		node *fore = head, *hind = head;
		while (fore->n != (int)m) {
			hind = fore;
			fore = fore->next;
		}
		node *p = fore;
		hind->next = fore->next;
		delete  p;
	}
	else {
		head = head->next;
		delete head;
	}
}
void destroy(node *head) {
	node *hind=head,*fore=head;
	while(hind->next!=NULL){
		fore=hind->next;
		delete hind;
		hind=fore;
	}
}
int main() {
	int n;
	cin >> n;
	node *head = creat(n);
	print(head,n);
	int m;
	cin >> m;
	del(head, m);
	print(head, n-1);
	destroy(head);
}
