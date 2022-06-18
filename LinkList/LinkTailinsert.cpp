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
void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = tail->next; //or tail = temp;
    
    
}
void print(Node* &tail){
    Node* temp = tail;
    while(temp!=NULL){
        
        cout<< temp -> data << " ";
        temp = temp -> next ;
    }
    cout <<" ";
}
int main(){
   
    //create a new Node
    Node* node1 = new Node(10);
    Node* tail = node1;
    print(tail);

     insertAtTail(tail, 15);
     print(tail);

     insertAtTail(tail,25);
    print(tail);
    return 0;
}
