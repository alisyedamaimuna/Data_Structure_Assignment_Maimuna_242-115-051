/*17) Write a function to search for an element in a singly linked list.*/
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

void search_node(int data){
    Node* current_node =root;
    int index =0;
    while(current_node !=nullptr){
        if(current_node -> data==data){
            cout<<"found at index : "<<index<<endl;
            return;
        }
        current_node =current_node -> next;
        index++;
    }
    cout<<"Not found the data in the List"<<endl;
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
	search_node(3);
	search_node(79);
	return 0;
}
