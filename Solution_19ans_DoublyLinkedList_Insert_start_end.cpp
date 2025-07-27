/*19) Implement a doubly linked list with insert at beginning, end, and display operations.*/
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node* prev;
};
Node* root =nullptr;
void add_node(int data){
    Node* new_node = new Node();
    new_node -> data = data;
    new_node -> next =nullptr;
    new_node -> prev =nullptr;
    if(root == nullptr) root = new_node;
    else{
        Node* current_node =root;
        while(current_node -> next != nullptr){
            current_node = current_node -> next;
        }
        current_node -> next = new_node;
        new_node -> prev =current_node;
    }
}

int count_node(){
    int count =0;
    Node* current_node = root;
    while(current_node !=nullptr){
        ++count;
        current_node = current_node -> next;
    }
    return count;
}

void insert_node(int data, int index){
    Node* new_node =new Node();
    new_node -> data =  data;
    new_node -> next = nullptr;
    new_node -> prev =nullptr;
    if(index==0){
        new_node -> next = root;
        if(root != nullptr)
        root -> prev = nullptr;
        root = new_node;
        return;
    }
Node* current_node =root;
for(int i=0; i<index-1&& current_node!= nullptr; i++){
    current_node =current_node -> next;
}
if(current_node == nullptr ){
    cout<<"Out of Boundary input"<<endl;
    delete new_node;
    return;
}
new_node -> next = current_node -> next;
new_node -> prev =current_node;
if(current_node -> next != nullptr){
    current_node -> next -> prev = new_node;
}
current_node -> next = new_node;
}

void display(){
    Node* current_node = root;
    while(current_node !=nullptr){
        cout<<current_node -> data <<" ";
        current_node = current_node -> next;
    }
    cout<< endl;
}
int main() {
	add_node(1);
	add_node(2);
	add_node(3);
	add_node(4);
	int start = 0,end = count_node();
	insert_node(200,end);
	insert_node(100,start);
	display();
	return 0;
} 
