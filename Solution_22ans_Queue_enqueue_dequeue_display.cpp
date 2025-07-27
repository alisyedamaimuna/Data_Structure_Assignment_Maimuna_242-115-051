//22) Implement a queue using array with enqueue, dequeue, and display.
#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int myQueue[MAX];
int front=-1,rear=-1;

int isEmpty(){
    return front==-1||front>rear;
}
int isFull(){
    return rear==MAX-1;
}
void enqueue(int value){
    if(isFull()){
        cout<<"Queue Overflow"<<endl;
        return;
    }
    if(isEmpty()){
        front=0;
    }
    myQueue[++rear]=value;
}

void dequeue(){
    if(isEmpty()){
        cout<<"Queue Underflow"<<endl;
        return;
    }
    ++front;
}

void display(){
    if(isEmpty()){
        cout<<"Queue is Empty nothing to show"<<endl;
        return;
    }
    for(int i=front;i<= rear;i++){
        cout<<myQueue[i]<<endl;
    }
}

int main() {
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	dequeue();
	display();
	return 0;
} 
