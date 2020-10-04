#include"tree.h"
int main()
{

node *root=addnode();
root->left=addnode();
root->left->left=addnode();
root->left->right=addnode();
root->right=addnode();
root->right->right=addnode();
printf("Pre_order:");
pre_ord(root);
printf("\npost_order:");
post_ord(root);
printf("\nIn_Order:");
in_ord(root);
printf("\n");

}
