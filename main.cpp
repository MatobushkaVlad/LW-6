#include <iostream>

struct Tree
{
	int data;
	Tree* left;
	Tree* right;
	Tree* parent;
};

Tree* Make(int data, Tree* p)
{
	Tree* q = new Tree;
	q->data = data;
	q->left = nullptr;
	q->right = nullptr;
	q->parent = p;
	return q;
}

void Add(int data, Tree*& root)
{
	if (root == nullptr)
	{
		root = Make(data, nullptr);
		return;
	}
	Tree* v = root;
	while ((data < v->data && v->left != nullptr) || (data > v->data && v->right != nullptr))
		if (data < v->data)
			v = v->left;
		else
			v = v->right;
	if (data == v->data)
		return;
	Tree* u = Make(data, v);
	if (data < v->data)
		v->left = u;
	else
		v->right = u;
}


int main()
{
	Tree* root = nullptr;

	return 0;
}