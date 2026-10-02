#include<iostream>
using namespace std;
struct node{
int data;
struct node * next;
};
node *head = nullptr, *newnode = nullptr, *temp = nullptr, *nextnode = nullptr;
void createlinklist(){
head = nullptr;
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
cout<<endl<<endl;
}
temp = head;
while(temp != nullptr){
cout<<temp->data<<" ";
temp = temp->next;
count ++;
}
cout<<endl<<endl;
cout<<"Elements before deleting element: "<<count<<endl;
cout<<endl;
}

void delfrombeg(){
temp = head;
if(head == nullptr){
cout<<"List is Empty\n"<<endl;
return;
}
head = temp->next;
delete temp;
}
void delfromgivpos(){
int count2 = 0;
temp = head;
while(temp != nullptr){
temp = temp->next;
count2 ++;
}
temp = head;
if(head == nullptr){
cout<<"List is Empty\n"<<endl;
return;
}
else if(head->next == nullptr){
delete head;
head = nullptr;
cout<<"Since there is only one element in list,List becomes empty after deletion"<<endl<<endl;
return;
}
int i = 1, pos;
cout<<"Enter position to delete: ";
cin>>pos;
if(pos <= 0 || pos > count2){
cout<<"Invalid position"<<endl;
return;
}
else if(pos == 1){
delfrombeg();
return;
}

cout<<endl;
while(i<pos - 1){
temp = temp->next;
i++;
}
nextnode = temp->next;
temp->next = nextnode->next;
delete nextnode;

count2 = 0;
temp = head;
while(temp != nullptr){
cout<<temp->data<<" ";
temp = temp->next;
count2 ++;
}
cout<<endl;
cout<<"\n"<<"Elements after deleting an element: "<<count2<<endl;
cout<<endl;
}
int main(){
createlinklist();
cout<<"Deleting an element at a specific position"<<endl<<endl;
delfromgivpos();
return 0;
}