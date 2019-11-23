#include "TreeNode.h"
template <class object>
TreeNode<object>::TreeNode()
{
	this->obj = NULL;
	this->left = this->right = NULL;
}

template <class object>
TreeNode<object>::TreeNode(object* obj)
{
	this->obj = obj;
	this->left = this->right = NULL;
}

template<class object>
TreeNode<object>::~TreeNode()
{
}

template<class object>
void TreeNode<object>::setRoot(TreeNode<object> arg)
{
	root = arg;
}

template<class object>
TreeNode<object>* TreeNode<object>::getRoot()
{
	return root;
}

template <class object>
object* TreeNode<object>::getinfo()
{
	return this->obj;
}

template <class object>
void TreeNode<object>::setinfo(object* obj)
{
	this->obj = obj;
}

template <class object>
TreeNode<object>* TreeNode<object>::getleft()
{
	return left;
}

template <class object>
void TreeNode<object>::setleft(TreeNode* left)
{
	this->left = left;
}

template <class object>
TreeNode<object>* TreeNode<object>::getright()
{
	return right;
}

template <class object>
void TreeNode<object>::setright(TreeNode* right)
{
	this->right = right;
}

template <class object>
int TreeNode<object>::isleaf()
{
	if (this->left == NULL && this->right == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}