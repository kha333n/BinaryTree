// BinaryTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BinaryTree.cpp"
#define ARRAY_SIZE 50
using namespace std;



int main()
{
	int x[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		x[i] = rand();
	}
	BinaryTree<int> BT(&x[0]);
	for (int i = 1; x[i] > 0; i++)
	{
		BT.insert(&x[i]);
	}
	cout << "Finding..." << endl;
	BT.find(200);
	cout << endl << endl;
	cout << "Inorder..." << endl << endl;  //Stack Overflow can occur.
	BT.inorder();
	cout << "Preorder..." << endl << endl;  //Stack Overflow can occur.
	BT.preorder();
	cout << "Postorder..." << endl << endl;  //Stack Overflow can occur.
	BT.postorder();
	system("pause");
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

