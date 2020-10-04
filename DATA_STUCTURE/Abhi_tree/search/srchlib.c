#include"srch.h"

node* addnode(int d)
{
node *new=malloc(sizeof(node));
new->data=d;
new->left=NULL;
new->right=NULL;
return new;
}


void disp(node *root)
{
if(root==NULL)
return;
printf("%d ",root->data);
disp(root->left);
disp(root->right);

}


node* comp(node *root ,int data)
{

if(root==NULL)
return addnode(data);

if(data<root->data)
root->left=comp(root->left,data);

else if(data>root->data)
root->right=comp(root->right,data);

return root;

}

void search(node *temp,int key)

{
        if(temp==NULL)
        {
        printf("Absent\n");
        return;
        }
         if(key<temp->data)
        {
            if(key==temp->data)
              {
            printf("Present\n");
        return;
           }
             search(temp->left,key);
         }
        else
           {
             if (key==temp->data)
                {
                printf("Present\n");
                return;
                 }
             
                search(temp->right,key);
              }
  }


























