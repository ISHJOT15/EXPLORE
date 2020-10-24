#include<stdio.h>
#include<conio.h>
#define N 5
int deque[N];
int front =-1,rear=-1;


void enqueue_front(int x){
if((front==0 && rear==N-1) || front==rear+1){
printf("\nQueue is full");
}
else if(front==-1 && rear==-1){
rear=0;
front=0;
deque[front]=x;
}
else if(front==0){
front=N-1;
deque[front]=x;
}
else{
front--;
deque[front]=x;
}
}


void enqueue_rear(int y){
if((front==0 && rear==N-1) || front==rear+1){
printf("\nQueue is full");
}
else if(front==-1 && rear==-1){
front=0;
rear=0;
deque[rear]=y;
}
else if(rear==N-1){
rear=0;
deque[rear]=y;
}
else{
rear++;
deque[rear]=y;
}
}


void display(){
int i=front;
if(front==-1 && rear==-1){
printf("\nQueue is empty");
}
else{
while(i!=rear){
printf("%d",deque[i]);
i=(i+1)%N;
}
printf("%d",deque[i]);
}
}


void getfront(){
if(front==-1 && rear==-1){
printf("\nQueue is empty");
}
else{
printf("\n%d",deque[front]);
}
}


void getrear(){
if(front==-1 && rear==-1){
printf("\nQueue is empty");
}
else{
printf("\n%d",deque[rear]);
}
}


void dequeue_front(){
if(front==-1 && rear==-1){
printf("\nQueue is empty");
}
else if(front==rear){
printf("\n%d is removed from deque\n",deque[front]);
front=-1;
rear=-1;
}
else if(front==N-1){
printf("\n%d is removed from deque\n",deque[front]);
front=0;
}
else{
printf("\n%d is removed from deque\n",deque[front]);
front++;
}
}

void dequeue_rear(){
if(front==-1 && rear==-1){
printf("\nQueue is empty");
}
else if(front==rear){
printf("\n%d is removed from deque\n",deque[rear]);
front=-1;
rear=-1;
}
else if(rear==0){
printf("\n%d is removed from queue\n",deque[rear]);
rear=N-1;
}
else{
printf("\n%d is removed from queue\n",deque[rear]);
rear--;
}
}

void main(){
clrscr();
enqueue_front(2);
enqueue_front(4);
enqueue_rear(3);
enqueue_front(8);
enqueue_rear(5);
display();
getfront();
getrear();
dequeue_front();
dequeue_rear();
dequeue_front();
display();
getch();
}