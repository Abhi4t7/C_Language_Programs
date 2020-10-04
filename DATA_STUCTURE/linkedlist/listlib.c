#include"list.h"
#define size 10
int min,max,a,b,count=1;
int arr[size];
int tos=0;
int tos1=0;
node *start = NULL;

void addbegin( int d)
{
node *new =malloc(sizeof(node));
if(new==NULL)
exit(1);
new->data=d;
new->next=start;
start=new;
}


void addempty(int d)
{
addbegin(d);

}


addend(int d)
{
if(start==NULL)
{
addempty(d);
return;
}
node *new=malloc(sizeof(node));
if(new==NULL)
exit(1);
new->data=d;
new->next=NULL;
node *temp=start;

while(temp -> next!= NULL)
{
temp =temp->next;

}

temp->next=new;

}


void display()
{
node *temp =start;
while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->next;
}
printf("\n");
}


int c_data()
{
node *temp1=start;
int c=0;
while(temp1!=NULL)
{
c++;
temp1=temp1->next;
}
printf("total element present in list = %d\n",c);
c=0;
return c;
}


void addafter(int key ,int d)
{
node *temp2=start;
while(temp2!=NULL)
{
if(temp2->data == key)
{
node *new=malloc(sizeof(node));
new->data=d;
new->next=temp2->next;
 temp2->next=new;
return;
}
temp2 = temp2 -> next;			

}
printf("Key is not present\n");
}


void addbefore(int key ,int d)
{
if(start==NULL)
{
printf("Empty list\n");
return;

}
if (start ->data==key)
{
addbegin(d);
return;

}
node *temp3=start;
while(temp3->next!=NULL)
{
if (temp3->next->data==key)
{
node *new=malloc(sizeof(node));
if(new==NULL)
exit(1);
new->data=d;
new->next=temp3->next;
temp3->next=new;
return;

}
temp3=temp3->next;
}
printf("Key not found\n");
}


void deletfirst()
{
if (start==NULL)
{
printf("Empty list\n");
return;
}
node *temp4=start;
start=start->next;
free(temp4);
}

void deletlast()
{
if(start==NULL)
{
printf("Empty list\n");
return;
}
if(start->next==NULL)
{
node *temp5=start;
start=NULL;
free(temp5);
}

node *temp=start;
while(temp->next->next!=NULL)
temp=temp->next;
node *p=temp->next;
temp->next=NULL;
free(p);
}


void deletall()
{
node *temp=start;
node *temp1=temp;
if(start==NULL)
{
	printf("list is empty\n");
	exit(1);
}	
while(temp1!=NULL)
{
temp1=temp->next;
free(temp);
temp=temp1;
}
printf("node are deleted\n");
start==NULL;
}


void addpos(int pos,int d)
{
int count=1;
node *temp=start;
if(pos==1)
{
	addbegin(d);
	return;
}
	
while(temp!=NULL)
{
if(count==pos-1)
{
node *new=malloc(sizeof(node));
if(new==NULL)
 exit(1);
new->data=d;
new->next=temp->next;
temp->next=new;
return;

}
temp=temp->next;
count++;
}
}


void enque(int data)
{
addbegin(data);
}

void deque()
{
node *temp=start;
while(temp!=NULL)
{
if(temp->next!=NULL)
{
int data=temp->data;
printf("%d ",data);
deletlast();
break;
}
temp=temp->next;
}
}


void enarr(int d)
{
if(tos==size)
{
printf("stack overflow\n");
return;
}

arr[tos]=d;
tos++;

}

void dearr()
{
int b=0;
if(tos1>=tos)
{
printf("stack underflow\n");
b=1;
}
if(b!=1)
{
int d=arr[tos1];
tos1++;
printf("first element in que = %d\n",d);
}
}


void disarr()
{
int i;
for(i=0;arr[i]!=NULL;i++)
{
printf("%d ",arr[i]);

}

printf("\n");

}


void delpos(int pos)
{
int count=1;
node *temp=start;
node *temp1;
while(temp!=NULL)
{
if(pos==1)
{
deletfirst();
break;
}
if(count==pos-1)
{
temp1=temp->next;
temp->next=temp->next->next;
free(temp1);
break;
}
temp=temp->next;
count++;
}

}



int  max_min()
{
node *temp=start;
max=temp->data;
min=temp->data;
while(temp->next!=NULL)
{
 b=temp->next->data;
if(b>=max)
{
max=b;
}
if(b<=min)
{
min=b;
}
temp=temp->next;
}
printf("Max number= %d\nMin number=%d\n",max,min);

}


void mvsml()
{ 
int c,e;
max_min();
c=min;
findpos(c);
e=count;
delpos(e);
addbegin(c);
display();
}

void mvlarg()
{
int d,f;
max_min();
d=max;
findpos(d);
f=count;
delpos(f);
addend(d);
display();
}

void findpos(int d)
{
 count=1;
node *temp=start;
while(temp!=NULL)
{
if(temp->data==d)
{
printf("key postion=%d\n",count);
break;
}
temp=temp->next;
count++;
}
}

void swapsml()
{
int p,q,r;
node *temp=start;
max_min();
p=min;
findpos(p);
r=count;
q=temp->data;
deletfirst();
addbegin(p);
delpos(r);
addpos(r,q);
}


void swapmax()
{
int p,q,r;
node *temp=start;
max_min();
p=max;
findpos(p);
r=count;
while(temp!=NULL)
{
q=temp->data;
temp=temp->next;
}
deletlast();
addend(p);
delpos(r);
addpos(r,q);
}


void rev_list()
{
int i=0,temp_arr[20];
node *temp=start;

while(temp!=NULL)
{
temp_arr[i]=temp->data;
temp=temp->next;
i++;
}

i--;
temp=start;

while(i>=0)
{
temp->data=temp_arr[i];
temp=temp->next;
i--;
}
display();
}
 

void addition()
{
int add=0;
node *temp=start;
while(temp!=NULL)
{
add=add+temp->data;
temp=temp->next;
}
printf("Addtion of all elements in list = %d\n",add);
}






                    
