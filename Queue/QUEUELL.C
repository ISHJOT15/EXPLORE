#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node * next;
};
struct node *front,*rear;
void enqueue(int x){
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=0;
if(front==0 && rear==0){
front=newnode;
rear=newnode;
}
else{
rear->next=newnode;
rear=newnode;
}
}
void display(){
struct node *temp;
if(front ==0 && rear==0){
printf("Queue is empty\n");
}
else{
temp=front;
while(temp!=0){
printf("%d",temp->data);
temp=temp->next;
}
}
}
void dequeue(){
struct node *temp;
temp=front;
if(front==0 && rear==0){
printf("Queue is empty\n");
}
else{
printf("%d is removed from queue\n",front->data);
front=front->next;
free(temp);
}
}
void peek(){
if(front==0 && rear==0){
printf("Queue is empty\n");
}
else{
printf("\n%d is the topmost element in the queue\n",front->data);
}
}
void main(){
enqueue(3);
enqueue(5);
enqueue(7);
display();
peek();
dequeue();
peek();
display();
getch();
}