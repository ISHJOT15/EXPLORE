#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *top =0;
void push();
void pop();
void tp();
void print();
void main(){
int ch;
clrscr();
do{
printf("enter 1 to insert data into stack\n");
printf("enter 2 to remove data from stack\n");
printf("enter 3 to print the data at topmost position\n");
printf("enter 4 to dispaly the stack\n");
printf("enter 5 to exit\n");
scanf("%d",&ch);
switch(ch){
case 1:push();
       break;
case 2:pop();
       break;
case 3:tp();
       break;
case 4:print();
       break;
case 5:printf("BYE BYE!....");
       break;
default:printf("invalid choice\n");
	break;
}
}
while(ch!=5);
getch();
}
void push(){
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data\n");
scanf("%d",&newnode->data);
newnode->next=top;
top=newnode;
}
void pop(){
struct node *tmp;
tmp=top;
top=top->next;
free(tmp);
}
void tp(){
printf("%d",top->data);
}
void print(){
struct node * temp;
temp=top;
while(temp!=0){
printf("%d",temp->data);
temp=temp->next;
}
}