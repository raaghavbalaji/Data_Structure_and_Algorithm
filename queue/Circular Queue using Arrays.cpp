#include<iostream>
using namespace std;
const int N = 5;
int queue[N];
int front = -1;
int rear = - 1;

void enqueue(){
int x;
if(front == -1 && rear == -1){
cout<<"Enter Data: ";
cin>>x;
cout<<endl;
front = rear = 0;
queue[rear] = x;
}
else if((rear + 1) % N == front){
cout<<"Queue is Full"<<endl;
}
else{
cout<<"Enter Data: ";
cin>>x;
cout<<endl;
rear = (rear + 1) % N;
queue[rear] = x;
}
}

void dequeue(){
if(front == -1 && rear == -1){
cout<<"Queue is Empty"<<endl;
}
else if(front == rear){
cout<<"After Removing "<<queue[front]<<" queue is empty"<<endl<<endl;
front = rear = -1;
}
else{
cout<<"Removed: "<<queue[front]<<endl;
front = (front + 1) % N;
}
}

void display(){
if(front == -1 && rear == -1){
cout<<"Queue is Empty"<<endl;
}
else{
int i = front;
cout<<"Elements In Queue:"<<endl;
while(i != rear){
cout<<queue[i]<<" ";
i = (i + 1) % N;
}
cout<<queue[rear]<<endl;
}
}

void peek(){
if(front == -1 && rear == -1){
cout<<"Queue is Empty"<<endl;
}
else{
cout<<queue[front]<<endl;
}
}
int main(){
int ch;
do{
cout<<"1. Enqueue\n";
cout<<"2. Dequeue\n";
cout<<"3. Peek\n";
cout<<"4. Display\n";
cout<<"5. Exit\n";
cout<<"Enter Choice: ";
cin>>ch;
switch(ch){
case 1: enqueue();
break;
case 2: dequeue();
break;
case 3: peek();
break;
case 4: display();
break;
case 5: return 0;
break;
default : cout<<"Invalid choice"<<endl;
}
}while(ch != 5);
return 0;
}