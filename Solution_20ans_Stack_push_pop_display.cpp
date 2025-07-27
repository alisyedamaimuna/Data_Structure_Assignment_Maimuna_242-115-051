//20) Implement a stack using array with push, pop, and display operations.
#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int myStack[MAX];
int top =-1;
int isEmpty(){
    return top==-1;
}

int isFull(){
    return top==MAX-1;
}

void push(int value){
    if(isFull()){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    myStack[++top]=value;
}

void pop(){
    if(isEmpty()){
        cout<<"Stack Underflow"<<endl;
        return;
    }
    --top;
}

void display(){
    if(isEmpty()){
        cout<<"Stack is Empty nothing to show"<<endl;
        return;
    }
    for(int i=top;i>=0;i--){
        cout<<myStack[i]<<endl;
    }
}
int main() {
	push(1);
	push(2);
	push(3);
	push(4);
	pop();
	display();
	return 0;
} 
