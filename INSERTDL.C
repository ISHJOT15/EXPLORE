#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;
};
struct node *head,*tail;
void print();
void create();
void inserthead();
void insertend();
void create(){
struct node *newnode;
int choice;
head=NULL;
while(choice){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->prev=NULL;
newnode->next=NULL;
if(head == NULL){
head=newnode;
tail=newnode;
}
else{
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
}
printf("do you want to continue(1,0)?");
scanf("%d",&choice);
}
}
void inserthead(){

struct node *nnode,*tmp;
tmp=head;
nnode=(struct node*)malloc(sizeof(struct node));
printf("\nenter the data to insert at any position\n");
scanf("%d",&nnode->data);

nnode->next=NULL;
nnode->prev=NULL;

tmp->prev=nnode;
nnode->next=tmp;
head=nnode;
}
void insertend(){
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data to insert at end\n");
scanf("%d",&newnode->data);
newnode->prev=NULL;
newnode->next=NULL;
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
}
void insertn(){
int i=1,pos;
struct node *temp,*newnode;
printf("enter the position to insert data at your mentioned position\n");
scanf("%d",&pos);
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
if(pos==1){
inserthead();
}
else{
temp=head;
while(i < pos-1){
temp=temp->next;
i++;
}
newnode->prev=temp;
newnode->next=temp->next;
temp->next=newnode;
newnode->next->prev=newnode;
}
}
void print(){
struct node *temp;
temp=head;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
}
void main(){
int ch;
clrscr();
create();
print();
printf("\nenter 1 to insert data at begin\n");
printf("enter 2 to insert data at end\n");
printf("enter 3 to insert data at nth position\n");
scanf("%d",&ch);
switch(ch){
case 1 :inserthead();
	break;
case 2 :insertend();
	break;
case 3 :insertn();
	break;
default:printf("enter only 1 and 2");
	break;
}
print();
getch();
}