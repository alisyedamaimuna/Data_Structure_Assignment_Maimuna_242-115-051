/*15) Write a C program to implement a singly linked list with operations: Insert at the
beginning, insert at a specific position, insert at the end, and display*/
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* root =nullptr;
void add_node(int data){
    Node* new_node = new Node();
    new_node -> data = data;
    new_node -> next =nullptr;
    if(root == nullptr) root = new_node;
    else{
        Node* current_node =root;
        while(current_node -> next != nullptr){
            current_node = current_node -> next;
        }
        current_node -> next = new_node;
    }
}

void insert_node(int data, int index){
    Node* new_node =new Node();
    new_node -> data =  data;
    new_node -> next = nullptr;
    if(index==0){
        new_node -> next = root;
        root =new_node;
        return;
    }
Node* current_node =root;
for(int i=0; i<index-1&& current_node!= nullptr; i++){
    current_node =current_node -> next;
}
if(current_node == nullptr ){
    cout<<"Out of Boundary input"<<endl;
    return;
}
new_node -> next = current_node -> next;
current_node -> next = new_node;
}

void display(){
    Node* current_node = root;
    while(current_node !=nullptr){
        cout<<current_node -> data <<" -> ";
        current_node = current_node -> next;
    }
    cout<< " null"<<endl;
}
int main() {
	add_node(1);
	add_node(2);
	add_node(3);
	insert_node(100,0);
	insert_node(50,2);
	insert_node(70,5);
	display();
	return 0;
}
