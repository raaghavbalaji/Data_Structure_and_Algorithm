#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
struct node* link;
};
node* top = nullptr;
void push(){
node* newnode;
newnode = new node;
cout<<"Enter data: ";
cin>>newnode->data;
cout<<endl;
newnode->link = top;
top = newnode;
cout<<endl;
}

void peek(){
if(top == nullptr){
cout<<"Stack is Empty"<<endl;
}
else{
cout<<top->data<<endl;
}
cout<<endl;
}

void pop(){
node* temp;
if(temp == 0){
cout<<"Stack is empty"<<endl;
}
temp = top;
top = top->link;
cout<<"Popped value: "<<temp->data<<endl;
delete temp;
cout<<endl;
}
void display(){
node* temp;
temp = top;
if(top == 0){
cout<<"List is Empty"<<endl;
}
else{
while(temp != nullptr){
cout<<temp->data<<endl;
temp = temp->link;
}
}
cout<<endl;
}

int main(){
int ch;
do{
cout<<"1. Push\n";
cout<<"2. Pop\n";
cout<<"3. Peek\n";
cout<<"4. Display\n";
cout<<"5. Exit\n";
cout<<"Enter Choice: ";
cin>>ch;
switch(ch){
case 1: push();
break;
case 2: pop();
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
cout<<endl;
return 0;
}