#include"srch.h"
int main()
{
//node *root=NULL;
int d,a=7,key;
printf("Enter data\n");
scanf("%d",&d);
node *root=addnode(d);
while(a)
{
printf("Enter data\n");
scanf("%d",&d);
comp(root,d);
a--;
}
disp(root);
printf("Enter the key\n");
scanf("%d",&key);
search(root,key);
}

