#include<stdio.h>
void main()
{
    int choice,a,b,c;
    printf("1.Add");
    printf("\n 2.Sub");
    printf("\n 3.Mul");
  printf("\n enter the choice = ");
  scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        //int a,b,c;
        printf("Enter the two numbers");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("addition= %d",c);
        break;

        case 2: //int a,b,c;
        printf("Enter the two numbers");
        scanf("%d%d",&a,&b);
        c= a-b;
        printf("sub= %d",c);
        break;

        case 3: //int a,b,c;
        printf("Enter the two numbers");
        scanf("%d%d",&a,&b);
        c= a*b;
        printf("Mul= %d",c);
        break;

        default :
            printf("invalid number");

    }
    getch();
}
