#include "BinaryTree.h"



template<class T>
BinaryTree<T>::BinaryTree(T *obj)
{
	BT = new TreeNode<T>(obj);
}

template<class T>
BinaryTree<T>::~BinaryTree()
{
	delete BT;
}

template <class T>
void BinaryTree<T>::insert(T* info)
{
	TreeNode<int>* node = new TreeNode<int>(info);
	TreeNode<int>* p, * q;
	p = q = BT;

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
		std::cout << "Attempt to insert duplicate: " << *info << std::endl;
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

template <class T>
void BinaryTree<T>::find(T info) const
{
	TreeNode<int>* p, * q;
	p = q = BT;

	while (info != *p->getinfo() && q != NULL)
	{
		p = q;
		if (info < *p->getinfo())
		{
			q = p->getleft();
		}
		else
		{
			q = p->getright();
		}
	}

	if (*p->getinfo() == info)
	{
		std::cout << "Found: " << p->getinfo() << std::endl;
	}
	else
	{
		std::cout << "Cannot Find..." << std::endl;
	}
}

template<class T>
void BinaryTree<T>::preorder()
{
	BT->setRoot(BT);
	preorderRecersive(BT);
	BT = BT->getRoot();
}

template<class T>
void BinaryTree<T>::inorder()
{
	BT->setRoot(BT);
	inorderRecersive(BT);
	BT = BT->getRoot();
}

template<class T>
void BinaryTree<T>::postorder()
{
	BT->setRoot(BT);
	postorderRecersive(BT);
	BT = BT->getRoot();
}


template <class T>
void BinaryTree<T>::preorderRecersive(TreeNode<T>* temp) const
{
	if (temp != NULL)
	{
		std::cout << temp->getinfo() << " ";
		preorderRecersive(temp->getleft());
		preorderRecersive(temp->getright());
	}
}

template <class T>
void BinaryTree<T>::inorderRecersive(TreeNode<T>* temp) const
{
	if (temp != NULL)
	{
		inorderRecersive(temp->getleft());
		std::cout << *(temp->getinfo()) << " ";
		inorderRecersive(temp->getright());
	}
}

template <class T>
void BinaryTree<T>::postorderRecersive(TreeNode<T>* temp) const
{
	if (temp != NULL)
	{
		postorderRecersive(temp->getleft());
		postorderRecersive(temp->getright());
		std::cout << temp->getinfo() << " ";
	}
}
