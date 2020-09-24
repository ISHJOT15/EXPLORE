#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node * next;
struct node * prev;
};
struct node * head,*tail;
void create(){
struct node * temp,*newnode;
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
void print(){
struct node * temp;
temp=head;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
}
void deletebegin(){
struct node * temp;
//temp=(struct node*)malloc(sizeof(struct node));
temp=head;
head=temp->next;
temp->next->prev=0;
free(temp);
}
void deleteend(){
struct node *temp;
//temp=(struct node*)malloc(sizeof(struct node));
temp=tail;
tail=tail->prev;
temp->prev->next=0;
free(temp);
}
void deleten(){
int i=1,pos;
struct node *temp;
printf("enter the position to delete\n");
scanf("%d",&pos);
//temp=(struct node*)malloc(sizeof(struct node));
temp=head;
while(i<pos){
temp=temp->next;
i++;
}
temp->next->prev=temp->prev;
temp->prev->next=temp->next;
free(temp);
}
void main(){
int ch;
clrscr();
create();
print();
printf("\nenter 1 to delete the 1st node\n");
printf("enter 2 to delete the last node\n");
printf("enter 3 to delete the nth node\n");
scanf("%d",&ch);
switch(ch){
case 1:deletebegin();
       break;
case 2:deleteend();
       break;
case 3:deleten();
       break;
default:printf("enter valid position");
	break;
}
print();
getch();
}