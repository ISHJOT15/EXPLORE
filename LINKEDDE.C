#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node * head = NULL;
void deletend(){
struct node *temp,*prevnode;
temp=head;
if(head==NULL){
printf("the list is empty....NOTHING IS THERE TO DELETE");
}
else{
while(temp->next!=NULL){
prevnode=temp;
temp=temp->next;
if(temp->next == 0){
prevnode->next = 0;
free(temp);
}
}
}
}
void print(){
struct node *temp;
temp=head;
while(temp!=NULL){
printf("%d\t",temp->data);
temp=temp->next;
}
}
void deletstart(){
struct node *temp;
temp=head;
head=temp->next;
free(temp);
}
void deletn(){
int pos,i=1;
struct node *newnode,*temp;
temp=head;
printf("enter the position to delete");
scanf("%d",&pos);
if(pos==1){
deletstart();
}
else{
while(i < pos-1){
temp=temp->next;
i++;
}
newnode=temp->next;
temp->next=newnode->next;
free(newnode);
}
}
void main(){
int choice,del;
struct node *newnode,*temp;
clrscr();
while(choice){
newnode = (struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head == NULL){
head=newnode;
temp=newnode;
}
else{
temp->next=newnode;
temp=newnode;
}
printf("do u want to continue?(0,1)");
scanf("%d",&choice);
}
temp=head;
while(temp!=NULL){
printf("%d\t",temp->data);
temp=temp->next;
}
printf("\npress 1 to delete the node from end\n");
printf("press 2 to delete from nth position\n");
scanf("%d",&del);
switch(del){
case 1:deletend();
       break;
case 2:deletn();
       break;
default:printf("only 1 and 2 are acceptable");
	break;
}
print();
getch();
}
