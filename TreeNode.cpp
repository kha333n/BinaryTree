#include "TreeNode.h"

TreeNode::TreeNode()
{
	this->obj = 0;
	this->left = this->right = NULL;
}


TreeNode::TreeNode(int* obj)
{
	this->obj = obj;
	this->left = this->right = NULL;
}


int* TreeNode::getinfo()
{
	return this->obj;
}


void TreeNode::setinfo(int* obj)
{
	this->obj = obj;
}


TreeNode* TreeNode::getleft()
{
	return left;
}


void TreeNode::setleft(TreeNode* left)
{
	this->left = left;
}


TreeNode* TreeNode::getright()
{
	return right;
}


void TreeNode::setright(TreeNode* right)
{
	this->right = right;
}


int TreeNode::isleaf()
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