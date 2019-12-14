#include<iostream>
using namespace std;
struct node { 
	unsigned n;
	node* next;
};
node* create(unsigned n) {
	node* head = NULL;
	node* rear=NULL;
	for (unsigned i = 0; i < n; i++) {
		unsigned a = 2;
		cin >> a;
		node* p = new node{ a };
		if (head == NULL) {
			head = p; rear = p;
		}
		else {
			rear->next = p;
			rear = p;
		}
	}
	return head;
}
void print(node* b) {
	if (b != NULL) {
		cout << b->n << ' ';
		print(b->next);
	}
}
/*void print(node* b) {
	for (int i = 0; b != NULL; i++) {
		cout << b->n << " ";
		b = b->next;
	}
}*/

void del(node* b,unsigned n) {
	node* w = NULL;
	for (; b != NULL;) {
		if (b->n != n) {
			w = b;
			b = b->next;
		}
		else {
			w->next = b->next;
			delete b;
			b = w->next;
		}
	}
}
void destroy(node* b) {
	if (b != NULL) {
		destroy(b->next);
		delete b;
	}
}
int main() {
	unsigned n = 3, k = 2;
	cin >> n;
	if (n > 0) {
		node* head = create(n);
		print(head);
		cin >> k;
		cout << '\n';
		del(head, k);
		print(head);
		destroy(head);
	}
}