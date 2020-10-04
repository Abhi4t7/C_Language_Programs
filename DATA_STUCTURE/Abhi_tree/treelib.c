#include"tree.h"
node* addnode()
{
int d;
printf("Enter data\n");
scanf("%d",&d);
node *new=malloc(sizeof(node));
new->data=d;
new->left=NULL;
new->right=NULL;
return new;
}
void pre_ord(node *root)
{
if (root==NULL)
return;
printf("%d ",root->data);
pre_ord(root->left);
pre_ord(root->right);
}

void in_ord(node *root)
{
if (root==NULL)
return;

in_ord(root->left);
printf("%d ",root->data);
in_ord(root->right);
}

void post_ord(node *root)
{
if (root==NULL)
return;
post_ord(root->left);
post_ord(root->right);
printf("%d ",root->data);
}









