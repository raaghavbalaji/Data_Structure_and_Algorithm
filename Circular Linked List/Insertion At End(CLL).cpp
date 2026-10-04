#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
}*tail;

void createcll(){
tail = nullptr;
node *newnode = nullptr;
int choice = 1;
while(choice != 0){
newnode = new node;
cout<<"Enter Data: ";
cin>>newnode->data;
newnode->next = nullptr;
if(tail == nullptr){
tail = newnode;
tail->next = newnode;
}
else{
newnode->next = tail->next;
tail->next = newnode;
tail = newnode;
}
cout<<endl;
cout<<"Do you want to continue ? (1 for \"yes\"! and 0 for \"No\"!: ";
cin>>choice;
if(choice != 1 && choice != 0){
cout<<"Invalid choice"<<endl;
return;
}
cout<<endl<<endl;
}
cout<<endl<<endl;
}

void display(){
node* temp;
if(tail == nullptr){
cout<<"List is empty"<<endl;
return;
}
else{
temp = tail->next;
do{
cout<<temp->data<<" ";
temp = temp->next;
}while(temp != tail->next);
}
}

void insertatend(){
cout<<endl;
cout<<"Insert at end"<<endl;
node *newnode = nullptr;
newnode = new node;
cout<<"Enter data: ";
cin>>newnode->data;
cout<<endl;
if(tail == nullptr){
tail = newnode;
tail->next = newnode;
}
else{
newnode->next = nullptr;
newnode->next = tail->next;
tail->next = newnode;
tail = newnode;
}
display();
}

int main(){
createcll();
display();
insertatend();
return 0;
}