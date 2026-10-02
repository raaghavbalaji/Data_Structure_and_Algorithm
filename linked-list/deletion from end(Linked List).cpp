#include<iostream>
using namespace std;
struct node{
int data;
struct node * next;
};
node *head = nullptr, *newnode = nullptr, *temp = nullptr, *prevnode = nullptr;
void createlinklist(){
head = nullptr;
int choice = 1;
int count = 0;
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
cout<<"Elements before deleting last element: "<<count<<endl;
cout<<endl;
}

void delfromend(){
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
while(temp->next != nullptr){
prevnode = temp;
temp = temp->next;
}
prevnode->next = nullptr;
delete temp;

int count2 = 0;
temp = head;
while(temp != nullptr){
cout<<temp->data<<" ";
temp = temp->next;
count2 ++;
}
cout<<endl;
cout<<"\n"<<"Elements after deleting last element: "<<count2<<endl;
cout<<endl;
}
int main(){
createlinklist();
cout<<"Deleting last element"<<endl<<endl;
delfromend();
return 0;
}