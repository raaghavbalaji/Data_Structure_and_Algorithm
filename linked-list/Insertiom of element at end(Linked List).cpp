#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node * next;
};
int main(){
cout<<"Implementation of linked list\n"<<endl;
node *head = nullptr, *newnode = nullptr, *temp = nullptr;
int count = 0;
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
cout<<"Do you want to continue ? (1 for yes and 0 for No): ";
cin>>choice;
cout<<endl;
}
temp = head;
cout<<endl;
cout<<"Traversal of linked list before insertion\n"<<endl;
while(temp != nullptr){
cout<<temp->data<<" ";
temp = temp->next;
count++;
}
cout<<endl<<endl;
cout<<"No of elements in linked list before insertion = "<<count<<endl;

cout<<"\nInsertion of element at end: \n"<<endl;
newnode = new node;
cout<<"Enter data: ";
cin>>newnode->data;
cout<<endl;
newnode->next = nullptr;
temp = head;
while(temp->next != nullptr){
temp = temp->next;
}
temp->next = newnode;
count = 0;
temp = head;
cout<<endl;
cout<<"Traversal of linked list After insertion\n"<<endl;
while(temp != nullptr){
cout<<temp->data<<" ";
temp = temp->next;
count++;
}
cout<<endl<<endl;
cout<<"No of elements in linked list after insertion = "<<count<<endl;

return 0;
}

    