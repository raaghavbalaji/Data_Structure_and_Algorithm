#include<iostream>
using namespace std;
struct node{
int data;
struct node * prev;
struct node * next;
};
void create_doubly_linked_list(){
node *head = NULL, *newnode = NULL, *temp = NULL;
int choice;
while(choice != 0){
newnode = new node;
cout<<"Enter data: ";
cin>>newnode->data;
newnode->prev = NULL;
newnode->next = NULL;
cout<<endl;
if(head == NULL){
head = temp = newnode;
}
else{
temp->next = newnode;
newnode->prev = temp;
temp = temp->next;
}
cout<<"Enter Choice(1 for Yes, 0 for No): ";
cin>>choice;
cout<<endl;
}
}
void display(){
node *head, *temp;
temp = head;
cout<<endl<<endl;
cout<<"Elements in Doubly Linked List: \n"<<endl;
while(temp != 0){
cout<<temp->data<<" ";
temp = temp->next;
}
cout<<endl;
}
int main(){
create_doubly_linked_list();
display();
return 0;
}