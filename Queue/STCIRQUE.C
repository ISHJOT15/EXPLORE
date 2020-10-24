#include<stdio.h>
#include<conio.h>
#define N 5
int s1[N],s2[N];
int top1=-1,top2=-1;
int count=0;
void enqueue(int x){
push1(x);
count++;
}
int push1(int x){
if(top1==N-1){
printf("Overflow");
}
else{
top1++;
s1[top1]=x;
}
return 0;
}
void dequeue(){
int i,a,b;
if(top1==-1 && top2==-1){
printf("Queue is empty");
}
else{
for(i=0;i<count;i++){
a=pop1();
push2(a);
}
b=pop2();
printf("\n%d is removed\n",b);
count--;
for(i=0;i<count;i++){
a=pop2();
push1(a);
}
}
}

int pop1(){
return s1[top1--];
}

int pop2(){
return s2[top2--];
}

int push2(int y){
if(top2==N-1){
printf("Overflow");
}
else{
top2++;
s2[top2]=y;
}
return 0;
}

void display(){
int i;
for(i=0;i<top1;i++){
printf("%d",s1[i]);
}
}

void main(){
clrscr();
enqueue(5);
enqueue(2);
enqueue(4);
enqueue(7);
display();
dequeue();
display();
getch();
}