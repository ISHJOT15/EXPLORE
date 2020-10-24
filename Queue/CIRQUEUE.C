#include<stdio.h>
#include<conio.h>
#define N 5
int queue[5];
int front = -1;
int rear = -1;
void enqueue(int x){
if(rear==-1 && front==-1){
rear=0;
front=0;
queue[rear] = x;
}
else if((rear+1)%N==front){
printf("\nQueue is full");
}
else{
rear=(rear+1)%N;
queue[rear]=x;
}
}

void dequeue(){
if(rear==-1 && front==-1){
printf("\nQueue is empty");
}
else if(front==rear){
printf("\n%d is removed from queue",queue[front]);
front=-1;
rear=-1;
}
else{
printf("\n%d is removed from queue\n",queue[front]);
front=(front+1)%N;
}
}

void display(){
int i= front;
if(rear==-1 && front==-1){
printf("\nQueue is empty");
}
while(i!=rear){
printf("%d",queue[i]);
i=(i+1)%N;
}
printf("%d",queue[i]);
}

void peek(){
printf("\nThe topmost element in queue is %d\n",queue[front]);
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
dequeue();
enqueue(7);
enqueue(8);
display();
peek();
getch();
}