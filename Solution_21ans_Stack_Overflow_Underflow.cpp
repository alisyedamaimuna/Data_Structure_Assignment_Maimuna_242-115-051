//21) Write a C program to demonstrate stack overflow and underflow conditions.
#include <bits/stdc++.h>
using namespace std;
#define MAX 3
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


int main() {
	push(1);
	push(2);
	push(3);
	push(4);
	pop();
	pop();
	pop();
	pop();
	return 0;
} 
