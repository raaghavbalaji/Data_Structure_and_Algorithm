#include<iostream>
using namespace std;
struct node{
int data;
struct node * next;
};
node *head = nullptr, *newnode = nullptr, *temp = nullptr;
void createlinklist(){
head = 0;
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
cout<<"Elements before deleting first element: "<<count<<endl;
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
int count2 = 0;
temp = head;
while(temp != nullptr){
cout<<temp->data<<" ";
temp = temp->next;
count2 ++;
}
cout<<endl;
cout<<"\n"<<"Elements after deleting first element: "<<count2<<endl;
cout<<endl;
}
int main(){
createlinklist();
cout<<"Deleting first element"<<endl<<endl;
delfrombeg();
return 0;
}