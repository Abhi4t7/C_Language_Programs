#include"list.h"

node *start=NULL;
node *end=NULL;


void addempty(int d)
{
node *new=malloc(sizeof(node));
if(new==NULL)
exit(1);
new->data=d;
new->prev=NULL;
new->next=NULL;
start=new=end;
}
void addbegin(int d)
{
printf("good1\n");
if(start == NULL)
{
addempty(d);
return;
}
node *new = malloc(sizeof(node));
if(new == NULL)
return;
new->data=d;
new->prev=NULL;
new->next=start;
start->prev=new;
start=new;
}

void addlast(int d)
{
if(start==NULL)
{
addempty(d);
return;
}
node *new=malloc(sizeof(node));
if(new==NULL)
{
exit(1);
}
new->data=d;
new->prev=end;
new->next=NULL;
end->next=new;
end=new;

}

void addbefore(int key,int d)
{
printf("good\n");
if(start==NULL)
{
printf("Empty list\n");
return;
}
if(end->data==key)
{
addbegin(d);
return;
}
node *temp=start;
while(temp!=NULL)
{
if(temp->data==key)
{
node *new=malloc(sizeof(node));
if (new==NULL)
exit(1);
new->data=d;
new->prev=temp->prev;
new->next=temp;
temp->prev->next=new;
temp->prev=new;
return;

}

temp=temp->next;

}
printf("Key is not found\n");

}

void addafter(int key,int d)
{
if(start==NULL)
{
printf("Empty list\n");
return;

}

if(end->data==key)
{
addlast(d);
return;
}

node *temp=start;
while(temp!=NULL)
{
if (temp->data==key)
{
node *new=malloc(sizeof(node));
if(new==NULL)
exit(1);


new->data=d;
new->prev=temp;
new->next=temp->next;
temp->next->prev=new;
temp->next=new;
return;

}
temp=temp->next;

}
printf("key is not found\n");
}

void display()
{

printf("%d",start);
int c=0;
node *temp=start;
while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->next;
c++;
}
printf("\n Total number of elements= %d\n",c);
c=0;
}


