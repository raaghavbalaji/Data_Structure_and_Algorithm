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

void deleteatbeg(){
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

void deleteatend(){
node *temp;
if(head == nullptr){
cout<<"List is Empty"<<endl;
return;
}
temp = tail;
tail->prev->next = head;
head->prev = tail->prev;
tail = temp->prev;
delete temp;
cout<<endl;
display();
}

void deleteatpos(){
cout<<endl<<endl;
cout<<"Deletion At Position"<<endl;
node *current, *nextnode;
int i = 1, pos;
cout<<"Enter Position: ";
cin>>pos;
cout<<endl;
int l = getlen();
if(pos < 1 || pos > l){
cout<<"Invalid Position"<<endl;
return;
}
else if(pos == 1){
deleteatbeg();
}
else if(pos == l){
deleteatend();
}
else{
current = head;
while(i < pos - 1){
current = current->next;
i++;
}
nextnode = current->next;
current->next = nextnode->next;
nextnode->next->prev = current;
delete nextnode;
display();
}
}

int main(){
create_dcll();
display();
deleteatpos();
return 0;
}