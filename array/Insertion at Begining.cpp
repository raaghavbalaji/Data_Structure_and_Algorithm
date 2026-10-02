#include<iostream>
using namespace std;
int a[50];
int size;
void insertionofarray(){
cout<<"Insertion at Begining\n\n";

cout<<"Enter Size of array: ";
cin>>size;
cout<<endl;
cout<<"Enter Elements of array: ";
for(int i = 0; i < size; i ++){
cin>>a[i];
}

cout<<endl<<endl;

int element;
cout<<"enter element: ";
cin>>element;

cout<<endl<<endl;

for(int i = size - 1; i >= 0; i--){
a[i + 1] = a[i];
}
a[0] = element;

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