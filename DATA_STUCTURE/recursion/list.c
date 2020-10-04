#include <stdio.h>
#include <stdlib.h>

struct Node
{
        int data;
        struct Node *next;
};

typedef struct Node node;
node* Addempty(node *,int);
node*  Addbegin(node *, int);
node*  Addend(node*, int);
void Dis(node *);
void Dis_rev(node *);

int main()
{
        node *start = NULL;
        int choice;

        while(1)
        {
                printf("0 : Exit\n");
                printf("1 : Add beginning\n");
                printf("2 : Add end\n");
                printf("3 : Display\n");
                printf("4 : Reverse Display\n");
                printf("5: AddEmpty\n");

                printf("Enter your choice\n");
                scanf("%d", &choice);

                switch(choice)
                {
                        case 0:
                                exit(1);
                        case 1:
                       { 
                                int data;
                                printf("Enter data\n");
                                scanf("%d", &data);
                                start = Addbegin(start, data);
                                break;
                        }
                        case 2:
                        {
                                int data;
                                printf("Enter data\n");
                                scanf("%d", &data);
                                start = Addend(start, data);
                                break;
                        }
                        case 3:
                                Dis(start);
                                printf("\n");
                                break;
                        case 4:
                                Dis_rev(start);
                                printf("\n");
                                break;
                        case 5:
                              {
                                int data;
                                printf("Enter data\n");
                                scanf("%d", &data);
                                start = Addempty(start, data);
                                break;
                                }
                        default:
                                printf("invalid choice\n");
                }
          }
 
         }

node*  Addempty(node *start, int data)
{
        node *temp = (node*) malloc(sizeof(node));
        temp -> data = data;
        temp -> next = start;
        start = temp;
        return start;
}


node*  Addbegin(node *start, int data)
{
        Addempty(start, data);
}

node*  Addend(node *start, int data)
{

          if( start == NULL )
        {
                Addempty(start, data);
                return;
        }

        node *p = start;

        while(p -> next != NULL)
                p = p -> next;

        node *temp = (node*) malloc(sizeof(node));
        temp -> data = data;
        temp -> next = NULL;
        p -> next = temp;
        return start;
}

void Dis(node *start)
{
        if(start == NULL)
                return;
        printf("%d ", start -> data);
        Dis(start -> next);
}
void Dis_rev(node *start)
{
        if(start == NULL)
                return;
        Dis_rev(start -> next);
        printf("%d ", start -> data);
}









