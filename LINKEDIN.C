#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void main(){
int i=1,pos,choice,count=0;
struct node *head, *newnode, *temp;
clrscr();
head= NULL;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
temp=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
printf("Do you want to continue(0,1)?");
scanf("%d",&choice);
count++;
}

printf("Enter the position where you want to insert data:\n");
scanf("%d\n",&pos);
if(pos>count){
printf("invalid position\n");
}
else if(pos==0){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
}
else{
temp=head;
while(i<pos)
{
temp=temp->next;
i++;
}
printf("enter data.\n");
newnode=(struct node*)malloc(sizeof(struct node));
scanf("%d",&newnode->data);
newnode->next=temp->next;
temp->next=newnode;
}
temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
getch();
}