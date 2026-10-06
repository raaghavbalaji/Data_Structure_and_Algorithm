#include<iostream>
using namespace std;

struct node{
int data;
struct node *next;
}* front = nullptr, *rear = nullptr;

void enqueue(){
node* newnode;
newnode = new node;
cout<<"Enter Data: ";
cin>>newnode->data;
newnode->next = nullptr;

if(front == nullptr){
front = rear = newnode;
rear->next = front;
}
else{
rear->next = newnode;
rear = newnode;
rear->next = front;
}
}

void dequeue(){
node* temp = front;
if(front == nullptr && rear == nullptr){
cout<<"Queue is Empty"<<endl;
}
else if(front == rear){
cout<<"dequeued Element: "<<front->data<<endl;
delete temp;
front = rear = nullptr;
cout<<"After Removing Last Element, Queue is Empty\n"<<endl;
}
else{
cout<<"dequeued Element: "<<front->data<<endl;
front = front->next;
rear->next = front;
delete temp;
}
}

void peek(){
if(front == nullptr && rear == nullptr){
cout<<"Queue is Empty"<<endl;
}
else{
cout<<front->data<<endl;
}
}

void display(){
if(front == nullptr && rear == nullptr){
cout<<"Queue is Empty"<<endl;
}
else{
node* temp = front;
do{
cout<<temp->data<<" ";
temp = temp->next;
}while(temp != front);
cout<<endl;
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