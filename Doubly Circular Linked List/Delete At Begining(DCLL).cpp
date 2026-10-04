#include<iostream>
using namespace std;

struct node{
int data;
node * next;
node * prev;
}*head, *tail;

void create_dcll(){
head = nullptr, tail = nullptr;
int choice = 1;
while(choice != 0){
node *newnode = nullptr;
newnode = new node;
cout<<"Enter Data: ";
cin>>newnode->data;
cout<<endl;
newnode->next = nullptr;
newnode->prev = nullptr;

if(head == nullptr){
head = tail = newnode;
newnode->next = head;
newnode->prev = head;
}

else{
tail->next = newnode;
newnode->prev = tail;
newnode->next = head;
head->prev = newnode;
tail = newnode;
}
cout<<"Do You Want to Continue(1 for Yes and 0 for No): ";
cin>>choice;
if(choice != 0 && choice != 1){
cout<<"Invalid Choice"<<endl;
return;
}
cout<<endl;
}
cout<<endl;
}

void display(){
node* temp;
temp = head;

if(temp == nullptr){
cout<<"List is Empty"<<endl;
return;
}
do{
cout<<temp->data<<" ";
temp = temp->next;
}while(temp != head);
}


void deleteatbeg(){
cout<<endl<<endl;
cout<<"Delete At Begining"<<endl;
cout<<endl;
node *temp;
if(head == nullptr){
cout<<"List is Empty"<<endl;
return;
}
temp = head;
head->next->prev = tail;
tail->next = head->next;
head = temp->next;
delete temp;
display();
}

int main(){
create_dcll();
display();
deleteatbeg();
return 0;
}