#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *next;
};
struct node *front=0,*rear=0;

void enqueue(int x){
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=0;

if(rear==0){
front=newnode;
rear=newnode;
rear->next=front;
}
else{
rear->next=newnode;
rear=newnode;
rear->next=front;
}
}

void dequeue(){
struct node *temp=front;
if(front==0 && rear==0){
printf("Queue is empty");
}
else if(front==rear){
front=0;
rear=0;
free(temp);
}
else{
front=front->next;
rear->next=front;
free(temp);
}
}

void display(){
struct node *temp;
temp=front;
if(front==0 && rear==0){
printf("Queue is empty");
}
else{
while(temp->next!=front){
printf("%d",temp->data);
temp=temp->next;
}
printf("%d",temp->data);
}
}

void peek(){
if(front==0 && rear==0){
printf("Queue is empty");
}
else{
printf("\n%d is the topmost element in the queue\n",front->data);
}
}
void main(){
clrscr();
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(5);
enqueue(6);
display();
peek();
dequeue();
display();
peek();
getch();
}