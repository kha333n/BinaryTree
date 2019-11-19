// BinaryTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TreeNode.h"
using namespace std;

void insert(TreeNode*, int*);

int main()
{
	int x[50000];
	for (int i = 0; i < 50000; i++)
	{
		x[i] = rand();
	}
	TreeNode* root = new TreeNode();
	root->setinfo(&x[0]);
	for (int i = 1; x[i] > 0; i++)
	{
		insert(root, &x[i]);
	}

}



void insert(TreeNode* root, int* info)
{
	TreeNode* node = new TreeNode(info);
	TreeNode* p, * q;
	p = q = root;

	while (*info != *(p->getinfo()) && q != NULL)
	{
		p = q;
		if (*info < *(p->getinfo()))
		{
			q = p->getleft();
		}
		else
		{
			q = p->getright();
		}
	}

	if (*info == *(p->getinfo()))
	{
		cout << "Attempt to insert duplicate: " << *info << endl;
		delete node;
	}

	else if (*info < *(p->getinfo()))
	{
		p->setleft(node);
	}
	else
	{
		p->setright(node);
	}
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


