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

int getlen(){
if(head == nullptr){
cout<<"List is Empty"<<endl;
return 0;
}
node *temp;
int count = 0;
temp = head;
do{
count ++;
temp = temp->next;
}while(temp != head);
return count;
}

void insertatbeg(){
node *newnode;
newnode = new node;
cout<<"Enter Data: ";
cin>>newnode->data;
cout<<endl;
newnode->next = nullptr;
newnode->prev = nullptr;

if(head == nullptr){
head = tail = newnode;
newnode->next = head;
newnode->prev = tail;
}
else{
newnode->next = head;
newnode->prev = tail;
tail->next = newnode;
head->prev = newnode;
head = newnode;
}
display();
}

void insertatend(){
node *newnode;
newnode = new node;
cout<<"Enter Data: ";
cin>>newnode->data;
cout<<endl;
newnode->next = nullptr;
newnode->prev = nullptr;

if(head == nullptr){
head = tail = newnode;
newnode->next = head;
newnode->prev = tail;
}
else{
newnode->next = head;
newnode->prev = tail;
tail->next = newnode;
head->prev = newnode;
tail = newnode;
}
display();
}

void insertatpos(){
cout<<endl;
cout<<"Insert At Position"<<endl<<endl;
if(head == nullptr){
cout<<"List is Empty"<<endl;
return;
}
int i = 1, pos;
cout<<"Enter Position: ";
cin>>pos;
cout<<endl;
int l = getlen();
if(pos < 1 || pos > l + 1){
cout<<"Invalid Position"<<endl;
return;
}
else if(pos == 1){
insertatbeg();
}

else if(pos == l + 1){
insertatend();
}
else{
node *newnode, *temp;
newnode = new node;
cout<<"Enter Data: ";
cin>>newnode->data;
cout<<endl;
newnode->next = nullptr;
newnode->prev = nullptr;

temp = head;
while(i < pos - 1){
temp = temp->next;
i++;
}
newnode->prev = temp;
newnode->next = temp->next;
temp->next->prev = newnode;
temp->next = newnode;
display();
}
}

int main(){
create_dcll();
display();
insertatpos();
return 0;
}