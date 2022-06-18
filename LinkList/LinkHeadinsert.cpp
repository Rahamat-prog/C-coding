#include<iostream>
#include<conio.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
    this -> data = data;
    this -> next = NULL;
}
};
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        
        cout<< temp -> data << " ";
        temp = temp -> next ;
    }
    cout <<" ";
}
int main(){
   
    //create a new Node
    Node* node1 = new Node(10);
    Node* head = node1;
    
     insertAtHead(head, 15);
     insertAtHead(head,25);
    print(head);
    return 0;
}
