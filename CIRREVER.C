#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node * next;
};
struct node * tail;
void print(){
struct node *temp;
temp=tail->next;
while(temp->next!=tail->next){
printf("%d",temp->data);
temp=temp->next;
}
printf("%d",temp->data);
}
void reverse();
void main(){
struct node * newnode;
int choice;
tail=0;
clrscr();
while(choice){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
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
printf("do u want to continue?");
scanf("%d",&choice);
}
print();
reverse();
printf("\n the reversed circular linked list is:\n");
print();
getch();
}
void reverse(){
struct node *prev,*curr,*nnode;
curr=tail->next;
nnode=curr->next;
while(curr!=tail){
prev=curr;
curr=nnode;
nnode=curr->next;
curr->next=prev;
}
nnode->next=tail;
tail=nnode;
}