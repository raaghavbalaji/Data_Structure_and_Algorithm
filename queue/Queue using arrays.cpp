#include<iostream>
using namespace std;
const int N = 5;
int queue[N];
int front = -1;
int rear = -1;
void enqueue(){
int x;
if(rear == N - 1){
cout<<"Condition Overflow"<<endl;
}
else if(front ==  - 1 && rear == -1){
front = rear = 0;
cout<<"Enter Data: ";
cin>>x;
cout<<endl;
queue[rear] = x;
}
else{
rear ++;
cout<<"Enter Data: ";
cin>>x;
cout<<endl;
queue[rear] = x;
}
}

void dequeue(){
if(front == - 1 && rear == -1){
cout<<"Queue Is Empty\n"<<endl;
}
else if(front == rear){
cout<<endl;
cout<<"Removed :"<<queue[front];
cout<<"After removing the only one element in the queue, Queue is Empty\n"<<endl;
front = rear = -1;
}
else{
cout<<endl;
cout<<"Removed :"<<queue[front]<<endl;
front ++;
}
}

void peek(){
if(front == - 1 && rear == -1){
cout<<"Queue Is Empty\n"<<endl;
}
else{
cout<<endl;
cout<<queue[front]<<endl<<endl;
}
}

void display(){
if(front == - 1 && rear == -1){
cout<<"Queue Is Empty\n"<<endl;
}
else{
cout<<endl;
cout<<"Elements in Queue: "<<endl;
for(int i = front; i < rear + 1; i++){
cout<<queue[i]<<" ";
}
cout<<endl<<endl;
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