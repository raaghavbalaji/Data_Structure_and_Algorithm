#include<iostream>
using namespace std;
int a[50];
int size;
void insertionofarray(){
cout<<"Insertion at specific position\n\n";

cout<<"Enter Size of array: ";
cin>>size;
cout<<endl;
cout<<"Enter Elements of array: ";
for(int i = 0; i < size; i ++){
cin>>a[i];
}

cout<<endl<<endl;

int pos, element;
cout<<"Enter Position: ";
cin>>pos;
pos = pos - 1;

cout<<endl<<endl;

cout<<"enter element: ";
cin>>element;

cout<<endl<<endl;

for(int i = size - 1; i >= pos; i--){
a[i + 1] = a[i];
}
a[pos] = element;

size ++;
}

void displayarray(){
for(int i = 0; i < size; i++){
cout<<a[i]<<" ";
}
cout<<endl;
}

int main(){
insertionofarray();
displayarray();
return 0;
}