#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
};
node *head = nullptr;
void createlink(){
node *nextnode = nullptr, *temp = nullptr;
int choice = 1;
head = nullptr;
while(choice != 0){
nextnode = new node;
cout<<"Enter Data: ";
cin>>nextnode->data;
cout<<endl;
nextnode->next = nullptr;
if(head == nullptr){
head = temp = nextnode;
}
else{
temp->next = nextnode;
temp = nextnode;
}
cout<<"Do you want to continue (1 for yes 0 for No): ";
cin>>choice;
cout<<endl;
}
cout<<"Before Reverse"<<endl;
}

void display(){
cout<<endl<<endl;
node *temp = nullptr;
temp = head;
while(temp != nullptr){
cout<<temp->data<<" ";
temp = temp->next;
}
cout<<endl<<endl;
}

void reverselist(){
node *nextnode = nullptr, *prevnode = nullptr, *currentnode = nullptr;
currentnode = nextnode = head;
while(nextnode != 0){
nextnode = nextnode->next;
currentnode->next = prevnode;
prevnode = currentnode;
currentnode = nextnode;
}
head = prevnode;
cout<<"After Reverse"<<endl;
display();
}
int main(){
createlink();
display();
reverselist();
return 0;
}