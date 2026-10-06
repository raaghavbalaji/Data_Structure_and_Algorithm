#include<iostream>
using namespace std;
const int N = 5;
int S1[N], S2[N];
int top1 = -1, top2 = -1;
int Count = 0;

void push1(int n){
if(top1 == N-1){
cout<<"Overflow Condition\n"<<endl;
}
else{
top1 ++;
S1[top1] = n;
}
}
void enqueue(){
int x;
cout<<"Enter Data: ";
cin>>x;
cout<<endl;
push1(x);
Count ++;
}

int pop1(){
return S1[top1--];
}
int pop2(){
return S2[top2--];
}
void push2(int m){
if(top2 == N-1){
cout<<"Overflow Condition\n"<<endl;
}
else{
top2 ++;
S2[top2] = m;
}
}

void dequeue(){
int a, b;
if(top1 == -1 && top2 == -1){
cout<<"Queue is Empty\n"<<endl;
}
else{
for(int i = 0; i < Count; i++){
a = pop1();
push2(a);
}
b = pop2();
cout<<"Deleted: "<<b<<endl;
Count -- ;
for(int i = 0; i < Count; i++){
a = pop2();
push1(a);
}
}
}

void peek(){
if(top1 == -1 && top2 == -1){
cout<<"Queue is Empty\n"<<endl;
}
else{
cout<<S1[0]<<endl<<endl;
}
}
void display(){
cout<<"Queue: "<<endl;
for(int i = 0; i <=top1; i++){
cout<<S1[i]<<" ";
}
cout<<endl;
}

int main(){
int ch;
do{
cout<<"1. Enqueue\n";
cout<<"2. Dequeue\n";
cout<<"3. Peek\n";
cout<<"4. Display\n";
cout<<"5. Exit\n";
cout<<"Enter Choice: ";
cin>>ch;
switch(ch){
case 1: enqueue();
break;
case 2: dequeue();
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