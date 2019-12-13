#include<iostream>
using  namespace std;
struct node
{
	unsigned num;
	node *next;
};

struct node* create(int n) {
	struct node* head;
	struct node* p;
	struct node* q;
	head = new node;
	head->num = 0;
	p = head->next;
	q = head;
	for (int i = 0; i < n; i++) {
		p = new node;
		cin >> p->num;
		q->next = p;
		q = p;
	}
	q->next = NULL;
	return head;
}

void print(struct node* head) {
	struct node* p;
	struct node* q;
	p = head->next;
	q = head;
	while (q->next != NULL)
	{
		cout << (p->num) << " ";
		q = p;
		p = p->next;
	}
}

void del(struct node* head, unsigned x) {
	struct node* p;
	struct node* q;
	p = head->next;
	q = head;
	while (p->next != NULL) {
		if (p->num == x) {
			break;
		}
		p = p->next;
		q = q->next;
	}
	if (p->next == NULL) {
		if (p->num == x) {
			delete p;
			q->next = NULL;
		}
		else
		{
			cout << "don't have number " << x << endl;
		}
	}
	else
	{
		q->next = p->next;
		delete p;
	}
}

void destroy(struct node* head) {
	struct node* p;
	struct node* q;
	q = p = head->next;
	while (q->next != NULL)
	{
		q = p->next;
		delete p;
		p = q;
	}
	delete q;
	delete head;
	cout << "destroy success";
}

int main() {

	int n, x;
	cin >> n;
	struct node* head = create(n);
	cout << endl;
	print(head);
	cout << endl;
	cin >> x;
	del(head, x);
	print(head);
	cout << endl;
	cin >> x;
	del(head, x);
	print(head);
	cout << endl;
	destroy(head);
	system("pause");
	return 0;
}