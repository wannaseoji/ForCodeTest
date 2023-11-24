#include<iostream>
#include<map>
//#include<cmdtree.h>
using namespace std;
map<char, pair<char,char>> tree;
void preorder(char node) {
	cout << node;
	if (tree[node].first != '.') {
		preorder(tree[node].first);
	}
	if (tree[node].second != '.') {
		preorder(tree[node].second);
	}
}

void inorder(char node) {
	if (tree[node].first != '.') {
		inorder(tree[node].first);
	}
	cout << node;
	if (tree[node].second != '.') {
		inorder(tree[node].second);
	}
}

void postorder(char node) {
	if (tree[node].first != '.') {
		postorder(tree[node].first);
	}
	if (tree[node].second != '.') {
		postorder(tree[node].second);
	}
	cout << node;
}
int main(){
	int n;
	cin >> n; //node의 수
	for (int i = 0; i < n; i++) {
		char node, left, right;
		cin >> node >> left >> right;
		tree[node] = make_pair(left, right);
	}
	
	preorder('A');
	cout << '\n';
	inorder('A');
	cout << '\n';

	postorder('A');

	

	return 0; 
}