#include<iostream>
using namespace std;
 
class node{
public:
int value;
node *next;
};

class stack{
node *top;
public:
stack(){
top=NULL;
}

void push(int value){
node *temp=new node;
temp->value=value;
temp->next=NULL;
if(top!=NULL){
temp->next=top;
}
top=temp;
}

void pop(){
if(top==NULL){
cout<<"Stack is empty\n";
}
else
{
top=top->next;
cout<<top->value<<"\n";
}
}

void show(){
node *temp=top;
while(temp!=NULL){
cout<<temp->value<<"->";
temp=temp->next;
}
cout<<"NULL"<<"\n";
}

};

int main(){
stack s;
int choice;
int x;
cout<<"\n\t IMPLEMENTING STACK USING LINKED LIST\n";
cout<<"\n1-PUSH\n2-POP\n3-DISPLAY\n4-EXIT\nEnter choice\n";
cin>>choice;
switch(choice)
{
case 1:
cout<<"Enter the number to push\n";
cin>>x;
s.push(x);
break;
case 2:
s.pop();
break;
case 3:
s.show();
break;
case 4:
return 0;
break;
default:
cout<<"\n Please enter correct choice\n";
break;
}
return 0;
}
