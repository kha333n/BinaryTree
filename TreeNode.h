#pragma once
#include <stdlib.h>

template <class object>
class TreeNode
{
private:
	object* obj;
	TreeNode* left;
	TreeNode* right;
public:
	TreeNode();
	TreeNode(object*);
	object* getinfo();
	void setinfo(object*);
	TreeNode* getleft();
	void setleft(TreeNode*);
	TreeNode* getright();
	void setright(TreeNode*);
	int isleaf();
};


