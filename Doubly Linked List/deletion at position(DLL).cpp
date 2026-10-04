#include<iostream>
using namespace std;
struct node{
int data;
struct node * prev;
struct node * next;
}*head, *tail;
void create_doubly_linked_list(){
head = nullptr;
node *newnode = nullptr;
tail = nullptr;
int choice = 1;
while(choice != 0){
newnode = new node;
cout<<"Enter data: ";
cin>>newnode->data;
newnode->prev = nullptr;
newnode->next = nullptr;
cout<<endl;
if(head == nullptr){
head = tail = newnode;
}
else{
tail->next = newnode;
newnode->prev = tail;
tail = newnode;
}
cout<<"Enter Choice(1 for Yes, 0 for No): ";
cin>>choice;
cout<<endl;
}
}
void display(){
node *temp;
temp = head;
cout<<endl<<endl;
cout<<"Elements in Doubly Linked List: \n"<<endl;
while(temp != 0){
cout<<temp->data<<" ";
temp = temp->next;
}
cout<<endl;
}

void deleteatbeg(){
node *temp;
if(head->next == 0){
delete head;
cout<<"List is empty"<<endl;
}
else{
temp = head;
head->next->prev = 0;
head = temp->next;
delete temp;
display();
}
}

void deleteatend(){
node *temp;
if(head->next == 0){
delete head;
cout<<"List is empty"<<endl;
}
else{
temp = tail;
tail->prev->next = 0;
tail = temp->prev;
delete temp;
display();
}
}


void deleteatpos(){
cout<<"Deletion at pos"<<endl<<endl;
node *temp;
int i = 1, count = 0, pos = 0;
temp = head;
while(temp != 0){
temp = temp->next;
count++;
}
cout<<"Enter Position: ";
cin>>pos;
cout<<endl<<endl;
if(pos < 1 || pos > count){
cout<<"Invalid Position"<<endl;
}
if(pos == 1){
deleteatbeg();
}
else if(pos == count){
deleteatend();
}
else{
temp = head;
while(i < pos){
temp = temp->next;
i++;
}
temp->next->prev = temp->prev;
temp->prev->next = temp->next;
delete temp;
display();
}
}
int main(){
create_doubly_linked_list();
display();
deleteatpos();
return 0;
}