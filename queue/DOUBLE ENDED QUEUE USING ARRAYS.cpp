#include<iostream>
using namespace std;
const int N = 5;
int dequeue[N];
int front = -1;
int rear = -1;

void Enqueueatfront(){
int x;
cout<<"Enter Data: ";
cin>>x;
cout<<endl;

if((rear + 1) % N == front){
cout<<"Queue is Full"<<endl;
}
else if(front == -1 && rear == -1){
front = rear = 0;
dequeue[front] = x;
}
else if(front == 0){
front = N - 1;
dequeue[front] = x;
}
else{
front --;
dequeue[front] = x;
}
}

void enqueueatrear(){
int x;
cout<<"Enter Data: ";
cin>>x;
cout<<endl;

if((rear + 1) % N == front){
cout<<"Queue is Full"<<endl;
}
else if(front == -1 && rear == -1){
front = rear = 0;
dequeue[rear] = x;
}
else if(rear == N - 1){
rear = 0;
dequeue[rear] = x;
}
else{
rear ++;
dequeue[rear] = x;
}
}

void dequeueatfront(){
if(front == -1 && rear == -1){
cout<<"Queue is Empty\n"<<endl;
}
else if(front == rear){
cout<<"Dequeued: "<<dequeue[front]<<endl;
front = rear = -1;
}
else if(front == N-1){
cout<<"Dequeued: "<<dequeue[front]<<endl;
front = 0;
}
else{
cout<<"Dequeued: "<<dequeue[front]<<endl;
front ++;
}
}

void dequeueatrear(){
if(front == -1 && rear == -1){
cout<<"Queue is Empty\n"<<endl;
}
else if(front == rear){
cout<<"Dequeued: "<<dequeue[rear]<<endl;
front = rear = -1;
}
else if(rear == 0){
cout<<"Dequeued: "<<dequeue[rear]<<endl;
rear = N - 1;
}
else{
cout<<"Dequeued: "<<dequeue[rear]<<endl;
rear --;
}
}

void display(){
if(front == -1 && rear == -1){
cout<<"Queue is Empty\n"<<endl;
}
int i = front;
cout<<"Elements in DOUBLE ENDED QUEUE: "<<endl;
while(i != rear){
cout<<dequeue[i]<<" ";
i = (i + 1) % N;
}
cout<<dequeue[rear]<<endl;
cout<<endl;
}

void getfront(){
if(front == -1 && rear == -1){
cout<<"Queue is Empty"<<endl;
}
else{
cout<<dequeue[front]<<endl;
}
}

void getrear(){
if(front == -1 && rear == -1){
cout<<"Queue is Empty"<<endl;
}
else{
cout<<dequeue[rear]<<endl;
}
}

int main(){
int ch;
do{
cout<<"1. Enqueue At Front\n";
cout<<"2. Enqueue At Rear\n";
cout<<"3. Dequeue At Front\n";
cout<<"4. Dequeue At Rear\n";
cout<<"5. getfront\n";
cout<<"6. getrear\n";
cout<<"7. display\n";
cout<<"8. Exit\n";
cout<<"Enter Choice: ";
cin>>ch;
switch(ch){
case 1: Enqueueatfront();
break;
case 2: enqueueatrear();
break;
case 3: dequeueatfront();
break;
case 4: dequeueatrear();
break;
case 5: getfront();
break;
case 6: getrear();
break;
case 7: display();
break;
case 8: return 0;
break;
default : cout<<"Invalid choice"<<endl;
}
}while(ch != 8);
return 0;
}