#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
}* front = nullptr, *rear = nullptr;

void enqueue(){
node *newnode;
newnode = new node;
cout<<endl;
cout<<"Enter Data: ";
cin>>newnode->data;
cout<<endl;
newnode->next = nullptr;
if(front == nullptr && rear == nullptr){
front = rear = newnode;
}
else{
rear->next = newnode;
rear = newnode;
}
}

void dequeue(){
if(front == nullptr && rear == nullptr){
cout<<endl;
cout<<"Queue Is Empty"<<endl<<endl;
}
else{
node *temp;
temp = front;
cout<<endl;
cout<<"Dequeued element: "<<temp->data<<endl;
front = front->next;
if (front == nullptr) {
rear = nullptr;
}
delete temp;
}
}

void display(){
if(front == nullptr && rear == nullptr){
cout<<endl;
cout<<"Queue Is Empty"<<endl<<endl;
}
else{
cout<<endl;
cout<<"Elements in Queue: "<<endl;
node*temp = front;
while(temp != nullptr){
cout<<temp->data<<" ";
temp = temp->next;
}
cout<<endl;
}
}

void peek(){
if(front == nullptr && rear == nullptr){
cout<<endl;
cout<<"Queue Is Empty"<<endl<<endl;
}
else{
cout<<endl;
cout<<front->data<<endl<<endl;
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