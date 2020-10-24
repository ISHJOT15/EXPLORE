#include<stdio.h>
#include<conio.h>

int queue[50],N,front=-1,rear=-1,x;
void enqueue(int);
void dequeue();
void display();
void peek();
void main(){
int i;
clrscr();
printf("Enter the number of elements in a queue\n");
scanf("%d",&N);
for(i=0;i<N;i++){
printf("Enter the data\n");
scanf("%d",&x);
enqueue(x);
}

display();
peek();
dequeue();
peek();
display();
getch();
}
void enqueue(int x){

if( rear == N-1){
printf("overflow\n");
}
else if( front==-1 && rear ==-1){
front=0;
rear=0;
queue[rear]=x;
}
else {
rear++;
queue[rear] = x;
}
}
void dequeue(){
if(front==-1 && rear==-1){
printf("underflow\n");
}
else if(front==rear){
front=-1;
rear=-1;
}
else{
printf("Removed item is %d\n",queue[front]);
front++;
}
}
void display(){
int i;
if(front==-1 && rear==-1){
printf("Queue is empty\n");
}
else{
for(i=front;i<rear+1;i++){
printf("Queue element is %d\n",queue[i]);
}
}
}
void peek(){
printf("The topmost element in queue is %d\n",queue[front]);
}