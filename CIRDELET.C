#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node * next;
};
struct node * tail;
void delstart();
void delend();
void deln();
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
struct node * newnode;
int choice,ch;
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
printf("\nenter 1 to delete the data at beginning\n");
printf("enter 2 to delete the data at end\n");
printf("enter 3 to delete the data at any postion\n");
scanf("%d",&ch);
switch(ch){
case 1:delstart();
       break;
case 2:delend();
       break;
case 3:deln();
       break;
default:printf("press only 1,2 and 3\n");
	break;
}
print();
getch();
}
void delstart(){
struct node *tmp;
tmp=tail->next;
tail->next=tmp->next;
free(tmp);
}
void delend(){
struct node * curr,*prev;
curr=tail->next;
while(curr->next!=tail->next){
prev=curr;
curr=curr->next;
}
prev->next=tail->next;
tail=prev;
free(curr);
}
void deln(){
int pos,i=1;
struct node * tmp,*curr;
printf("enter position\n");
scanf("%d",&pos);
curr=tail->next;
if(pos==1){
delstart();
}
else{
while(i<pos-1){
curr=curr->next;
i++;
}
tmp=curr->next;
curr->next=tmp->next;
free(tmp);
}
}