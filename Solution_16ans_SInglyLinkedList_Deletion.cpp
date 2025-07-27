/*16) Write functions to delete a node from the beginning, end, and a specific position in a singly linked list.*/
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

void delete_node(int index){
    if(root==nullptr){
        cout<<"List is Empty"<<endl;
        return;
    }
    if(index==0){
        Node* temp =root;
        root =root -> next;
        delete temp;
        return;
    }
    Node* current_node =root;
    for(int i=0;i<index-1&&current_node!=nullptr;i++){
        current_node =current_node -> next;
    }
    if(current_node ==nullptr|| current_node -> next ==nullptr){
        cout<<"Out of Boundary index to delete"<<endl;
        return;
    }
    Node* temp= current_node -> next;
    current_node -> next = temp -> next;
    delete temp;
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
	add_node(4);
	add_node(5);
	add_node(6);
	delete_node(0);
	delete_node(4);
	delete_node(2);
	display();
	return 0;
}
