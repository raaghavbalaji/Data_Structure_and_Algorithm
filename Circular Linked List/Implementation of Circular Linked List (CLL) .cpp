#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
}*head;

void createcll(){
node *temp = nullptr, *newnode = nullptr;
head = nullptr;
int choice = 1;
while(choice != 0){
newnode = new node;
cout<<"Enter data: ";
cin>>newnode->data;
cout<<endl;
newnode->next = nullptr;

if(head == nullptr){
head = temp = newnode;
}
else{
temp->next = newnode;
temp = newnode;
}
cout<<"Do you want to continue ? ( 1 for Yes and 0 for No): ";
cin>>choice;
if(choice != 1 && choice != 0){
cout<<"Invalid choice"<<endl;
return;
}
cout<<endl;
}
temp->next = head;
cout<<endl<<endl;
}

void display(){
node *temp;
if(head == nullptr){
cout<<"List is empty"<<endl;
}
else{
temp = head;
while(temp->next != head){
cout<<temp->data<<" ";
temp = temp->next;
}
cout<<temp->data<<endl;
}
}
int main(){
createcll();
display();
return 0;
}