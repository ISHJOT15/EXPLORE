#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node * next;
};
struct node * tail;
void inserthead();
void insertend();
void insertpos();
void print(){
struct node *temp;
temp=tail->next;
while(temp->next!=tail->next){
printf("%d",temp->data);
temp=temp->next;
}
printf("%d",temp->data);
}
void main(){
struct node *newnode;
int choice,ch;
clrscr();
tail=0;
while(choice){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
if(tail==0){
tail=newnode;
tail->next=newnode;
}
else{
newnode->next=tail->next;
tail->next=newnode;
tail=newnode;
}
printf("do u want to continue?(1,0)");
scanf("%d",&choice);
}
print();
printf("\npress 1 to insert the data at beginning\n");
printf("press 2 to insert the data at end\n");
printf("press 3 to insert at any position\n");
scanf("%d",&ch);
switch(ch){
case 1:inserthead();
       break;
case 2:insertend();
       break;
case 3:insertpos();
       break;
default:printf("press only 1,2 and 3\n");
	break;
}
print();
getch();
}
void inserthead(){
struct node *nwnode;
nwnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&nwnode->data);
nwnode->next=0;
nwnode->next=tail->next;
tail->next=nwnode;
}
void insertend(){
struct node *nnode;
nnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&nnode->data);
nnode->next=0;
nnode->next=tail->next;
tail->next=nnode;
tail=nnode;
}
void insertpos(){
struct node *tmp,*unode;
int i=1,pos;
unode=(struct node*)malloc(sizeof(struct node));
printf("enter data\n");
scanf("%d",&unode->data);
printf("\nenter postion");
scanf("%d",&pos);
unode->next=0;
tmp=tail->next;
while(i<pos-1){
tmp=tmp->next;
i++;
}
unode->next=tmp->next;
tmp->next=unode;
}