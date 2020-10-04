#include"list.h"
int main()
{
int choice,d,key,key1,pos,data,p;
while(1)
{
printf("\n");
printf("0:  Exit\n");
printf("1:  Add Empty\n");
printf("2:  Add begin\n");
printf("3:  Add End\n");
printf("4:  Display\n");
printf("5:  Total number\n" );
printf("6:  Insert After\n");
printf("7:  Insert before\n");
printf("8:  Delet first\n");
printf("9:  Delet last\n");
printf("10: Delet all\n");
printf("11: Add position\n");
printf("12: add queue\n");
printf("13: Delet queue\n");
printf("14: add Array que\n" );
printf("15: delet array que\n");
printf("16: Display array\n");
printf("17: Delet position in linked list\n");
printf("18: Max number in linked list\n");
printf("19: Move smallest no at begigning\n");
printf("20: Move largest number at end\n" );
printf("21: Find the key in linked list\n");
printf("22: Swap smallest number with first\n");
printf("23: Swap largest number with first\n");
printf("24: Reverse the list\n");
printf("25: Addition of all numbers in list\n");
printf("Enter choice\n");
scanf("%d",&choice);
if(choice!=25 && choice!=24 && choice!=23 && choice!=22 && choice!=20 && choice!=19 && choice!=5 && choice!=0 && choice!=8 && choice!=9 && choice!=4 && choice!=10 && choice!=13 && choice!=15 && choice!=16 && choice!=17 && choice!=18)
{
printf("Enter data or key\n");
scanf("%d",&d);
}
switch (choice)
{
case 0:
exit(1);
case 1:
addempty(d);
break;
case 2:
addbegin(d);
break;
case 3:
addend(d);
break;
case 4:
display();
printf("\n");
break;
case 5:
c_data();
break;
case 6:
printf("Enter key\n");
scanf("%d",&key);
addafter(key,d);
break;
case 7:
printf("Enter key\n");
scanf("%d",&key1);
addbefore(key1,d);
break;
case 8:
deletfirst();
break;
case 9:
deletlast();
break;
case 10:
deletall();
break;
case 11:
c_data();
printf("Enter the position\n");
scanf("%d",&pos);
addpos(pos,d);
break;
case 12:
enque(d);
break;
case 13:
deque();
break;
case 14:
enarr(d);
break;
case 15:
dearr();
break;
case 16:
disarr();
break;
case 17:
c_data();
printf("Enter the position\n");
scanf("%d",&p);
delpos(p);
break;
case 18:
max_min();
break;
case 19:
mvsml();
break;
case 20:
mvlarg();
break;
case 21:
display();
findpos(d);
break;
case 22:
display();
swapsml();
display();
break;
case 23:
display();
swapmax();
display();
break;
case 24:
display();
rev_list();
break;
case 25:
addition();
break;

default :
printf("Invalid choice");

}
}
}
