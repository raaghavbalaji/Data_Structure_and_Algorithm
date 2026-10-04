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

void deleteatbeg(){
cout<<endl<<endl;
if(tail == nullptr){
cout<<"List is empty"<<endl;
return;
}
node *temp;
temp = tail->next;

if(temp->next == temp){
tail = nullptr;
delete temp;
}
else{
tail->next = temp->next;
delete temp;
}
cout<<endl;
display();
}

void deleteatend(){
cout<<endl<<endl;
if(tail == nullptr){
cout<<"List is empty"<<endl;
return;
}
node *temp;
temp = tail->next;
if(temp->next == temp){
tail = nullptr;
delete temp;
}
else{
while(temp->next != tail){
temp = temp->next;
}
temp->next = tail->next;
delete tail;
tail = temp;
}
cout<<endl;
display();
}

int getlen(){
if(tail == nullptr){
return 0;
}
int count = 0;
node *temp;
temp = tail->next;
do{
count ++;
temp = temp->next;
}while(temp != tail->next);
return count;
}
void deleteatpos(){
cout<<endl;
cout<<"Deletion at Position"<<endl;
node *current, *nextnode;
int i = 1, pos;
if(tail == nullptr){
cout<<"List is empty"<<endl;
return;
}
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
current = tail->next;
while(i < pos - 1){
current = current->next;
i++;
}
nextnode = current->next;
current->next = nextnode->next;
delete nextnode;
cout<<endl;
display();
}
}
int main(){
createcll();
display();
deleteatpos();
return 0;
}