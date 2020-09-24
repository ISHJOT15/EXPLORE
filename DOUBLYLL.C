#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node * next;
struct node * prev;
};
struct node * head;
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
temp=newnode;
}
else{
temp->next=newnode;
newnode->prev=temp;
temp=newnode;
}
printf("do you want to continue(1,0)?");
scanf("%d",&choice);
}
temp=head;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
}

void main(){
create();
getch();
}