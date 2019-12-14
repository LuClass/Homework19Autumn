//(1)
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	vector<string> v;
	for (int i = 0; i < s.length(); ++i) {
		string tmp;
		while (s[i] >= '0' && s[i] <= '9') {
			tmp += to_string(s[i] - '0');
			++i;
		}
		if(tmp.length()!=0)v.push_back(tmp);
	}
	cout << v.size() << endl;
	for (auto& x : v)cout << x << endl;
	return 0;
}





//(2)
#include <bits/stdc++.h>
using namespace std;

template <typename T> struct ListNode {
	T _data;
	shared_ptr<ListNode> _succ;
	//ListNode(){}
	ListNode(T data, shared_ptr<ListNode> succ = nullptr):_data(data),_succ(succ){}
	~ListNode(){}
	shared_ptr<ListNode> create(int n) {
		shared_ptr<ListNode> head, *next;
		head->_succ = next;
		for (int i = 0; i <n; ++i) {
			shared_ptr<ListNode> tmp = make_shared<ListNode>();
			cin >> next->_data;
			next->_succ = tmp;
			next = tmp;
		}
		next->_succ = nullptr;
		return next;
	}
	void print(shared_ptr<ListNode> node) {
		while (node != nullptr) {
			cout << _data << " ";
			node = node->_succ;
		}
	}
	void del(shared_ptr<ListNode> node, int n) {
		for (int i = 0; i < n && node!=nullptr; ++i) {
			node = node->_succ;
		}
		node->_succ = node->_succ->_succ;
		//return node->_succ;
	}
	void destroy() {
		//let shared_ptr to do these stuff
	}
};


int main() {
	ListNode<int> L1{ 1 };
	cout << L1._data << " " << L1._succ << endl;
	cout << L1._succ.use_count();
	return 0;
}