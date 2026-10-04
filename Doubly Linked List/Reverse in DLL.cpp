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
void revdll(){
node *current, *nextnode, *prev;
current = head;
while(current != 0){
nextnode = current->next;
current->next = current->prev;
current->prev = nextnode;
current = nextnode;
}
current = head;
head = tail;
tail = current;
display();
}
int main(){
create_doubly_linked_list();
display();
revdll();
return 0;
}