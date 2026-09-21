#include<iostream>
using namespace std;
int main(){
int a[10];
int size;
cout<<"Enter size of array: ";
cout<<endl;
cin>>size;
cout<<"Enter elements of array: ";
for(int i = 0; i < size; i++){
cin>>a[i];
}
cout<<endl;
int del;
cout<<"Enter an element to delete: ";
cin>>del;
int temp;
for(int i = 0; i < size; i++){
if(a[i] == del){
temp = i;
break;
}
}
if(temp != -1){
for(int i = temp; i < size - 1; i++){
a[i] = a[i + 1];
}
size--;
}
for(int i = 0; i < size; i++){
cout<<a[i]<<" ";
}
cout<<endl;
return 0;
}
    