#include<stdio.h>

struct Node{
	int data;
	struct Node *left;
	struct Node *right;

};
typedef stuct Node node

int getRightMin(struct node *root)
{
	node *temp = root;

	//min value should be present in the left most node.
	while(temp->left != NULL)
	{
		temp = temp->left;
	}

	return temp->data;
}


node delnode(node *root,int val)
{

	if (root==NULL)
		return NULL;

	if(root->data >val)
		root->left=delnode(root->left,val)

	else if(root->data<val)
		root->right=delnode(root->right,val)

	else
	{
		if(root->left ==NULL && root->right==NULL)
		{
			free(root);
			return NULL;
		}
		else if (root->left==NULL)
		{
			temp=root->right;
			free(root);
			return temp;

		}

		else if(root->right==NULL)
		{
			temp=root->left;
			free(root);
			return temp;
		}
		else
		{
			int rightmin=getrightmin(root->right)
			root->data=rightmin;
			root->right=delnode(root->right,rightmin);
		

		}

	}

return root;

}
