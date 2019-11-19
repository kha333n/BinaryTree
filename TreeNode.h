#pragma once
#include <stdlib.h>


class TreeNode
{
private:
	int* obj;
	TreeNode* left;
	TreeNode* right;
public:
	TreeNode();
	TreeNode(int*);
	int* getinfo();
	void setinfo(int*);
	TreeNode* getleft();
	void setleft(TreeNode*);
	TreeNode* getright();
	void setright(TreeNode*);
	int isleaf();
};


