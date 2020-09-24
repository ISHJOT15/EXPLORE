#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *temp;
void print();
void main(){
int choice;
struct node *newnode;
clrscr();
temp=NULL;
while(choice){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=0;
if(temp==NULL){
temp=newnode;
temp->next=newnode;
}
else{
newnode->next=temp->next;
temp->next=newnode;
temp=newnode;
}
printf("Do you want to continue?(0,1)");
scanf("%d",&choice);
}
printf("\n%d\n",temp->next->data);
print();
getch();
}
void print(){
struct node *tmp;
tmp=temp->next;
while(tmp->next!=temp->next){
printf("%d",tmp->data);
tmp=tmp->next;
}
printf("%d",tmp->data);
}