/*18) Write a program to count the number of nodes in a singly linked list.*/
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

void count_node(){
    int count =0;
    Node* current_node = root;
    while(current_node !=nullptr){
        ++count;
        current_node = current_node -> next;
    }
    cout<<"The number of node : "<<count<<endl;
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
	display();
	count_node();
	return 0;
}
