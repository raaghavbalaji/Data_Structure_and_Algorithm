#include<bits/stdc++.h>
using namespace std;

const int N = 5;
int STACK[N];
int top =  -1;

void push(){
int x;
cout<<"Enter Data: ";
cin>>x;
cout<<endl;
if(top == N - 1){
cout<<"Overflow"<<endl;
}
else{
top ++;
STACK[top] = x;
}
}

void pop(){
int item;
if(top == -1){
cout<<"Underflow Condition"<<endl;
}
else{
item = STACK[top];
top --;
cout<<item<<endl;
}
}

void peek(){
if(top == -1){
cout<<"Underflow Condition"<<endl;
}
else{
cout<<STACK[top]<<endl;
}
}

void display(){
if(top == -1){
cout<<"Stack is empty"<<endl;
return;
}
for(int i = top; i >= 0; i--){
cout<<STACK[i]<<endl;
}
}

int main(){
int ch;
do{
cout<<"1. Push\n";
cout<<"2. Pop\n";
cout<<"3. Peek\n";
cout<<"4. Display\n";
cout<<"5. Exit\n";
cout<<"Enter Choice: ";
cin>>ch;
switch(ch){
case 1: push();
break;
case 2: pop();
break;
case 3: peek();
break;
case 4: display();
break;
case 5: return 0;
break;
default : cout<<"Invalid choice"<<endl;
}
}while(ch != 5);
return 0;
}