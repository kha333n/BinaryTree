#pragma once
#include <stdlib.h>
#include <iostream>

template <class object>
class TreeNode
{
private:
	object* obj;
	TreeNode root;
	TreeNode* left;
	TreeNode* right;
public:
	TreeNode();
	TreeNode(object*);
	~TreeNode();
	void setRoot(TreeNode<object>);
	TreeNode<object>* getRoot();
	object* getinfo();
	void setinfo(object*);
	TreeNode* getleft();
	void setleft(TreeNode*);
	TreeNode* getright();
	void setright(TreeNode*);
	int isleaf();
};

