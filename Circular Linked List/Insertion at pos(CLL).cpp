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

int getlen(){
if(tail == nullptr){
return 0;
}
int count = 0;
node *temp;
temp = tail->next;
do{
count++;
temp = temp->next;
}while(temp != tail->next);
return count;
}

void insertatbeg(){
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
}
display();

}

void insertatend(){
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

void insertatpos(){
cout<<endl<<endl;
cout<<"Insertion of Data\n"<<endl;
node *temp = nullptr, *newnode = nullptr;
int i = 1, pos;
cout<<"Enter Position: ";
cin>>pos;
cout<<endl;
int l = getlen();
if(pos < 1 || pos > l + 1){
cout<<"Invalid position"<<endl;
return;
}
else if(pos == 1){
insertatbeg();
}
else if(pos == l + 1){
insertatend();
}
else{
newnode = new node;
cout<<"Enter data: ";
cin>>newnode->data;
cout<<endl;
newnode->next = nullptr;
temp = tail->next;
while(i < pos - 1){
temp = temp->next;
i++;
}
newnode->next = temp->next;
temp->next = newnode;
display();
}

}

int main(){
createcll();
display();
insertatpos();
return 0;
}