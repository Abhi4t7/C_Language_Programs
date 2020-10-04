#include"list.h"
int main()
{
while(1)
{
int ch,d,key;
printf("0: add Empty\n");
printf("1: add begin\n");
printf("2: add last\n");
printf("3: add before\n");
printf("4: add after\n");
printf("5 :Display\n");
printf("Emter the choice\n");
scanf("%d",&ch);
if(ch!=5)
{
printf("Enter the data\n");
scanf("%d",&d);
}
switch(ch)
{
case 0:
 addempty(d);
break;
case 1:
addbegin(d);
break;
case 2:
addlast(d);
break;
case 3:
printf("Enter key\n");
scanf("%d",&key);
addbefore(d,key);
break;
case 4:
printf("Enter key\n");
scanf("%d",&key);
addafter(d,key);
break;
case 5:
display();
break;
default:
printf("Invalid choice\n");

}




}
}
