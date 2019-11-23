#pragma once
#include "treeNode.cpp"

template <class T>
class BinaryTree
{
private:
	TreeNode<T>* BT;
	void preorderRecersive(TreeNode<T>*) const;
	void inorderRecersive(TreeNode<T>*) const;
	void postorderRecersive(TreeNode<T>*) const;
public:
	explicit BinaryTree(T*);
	~BinaryTree();
	void insert(T*);
	void find(T) const;
	void preorder();
	void inorder();
	void postorder();
};
