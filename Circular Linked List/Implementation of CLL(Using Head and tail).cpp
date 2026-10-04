#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
}*head, *tail;
void createcll(){
head = nullptr, tail = nullptr;
node *newnode = nullptr;
int choice = 1;
while(choice != 0){
newnode = new node;
cout<<"Enter Data: ";
cin>>newnode->data;
newnode->next = nullptr;
if(head == nullptr){
head = tail = newnode;
}
else{
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
tail->next = head;

}

void display(){
if(head == nullptr){
cout<<"List is empty"<<endl;
return;
}
else{
tail = head;
while(tail->next != head){
cout<<tail->data<<" ";
tail = tail->next;
}
cout<<tail->data<<endl;
}
}

int main(){
createcll();
display();
return 0;
}