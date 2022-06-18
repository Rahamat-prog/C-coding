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
//destructer
~Node(){
int value = this->data;
//memory free
if(this->next != NULL){
    delete next;
    this->next = NULL;
}
cout<< " memory free for node with data "<<value<< endl;
}
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = tail->next; //or tail = temp;
    
    
    
    
    
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        
        cout<< temp -> data << " ";
        temp = temp -> next ;
    }
    cout <<endl;
}
//middle mai kahi pe new node add
void insertposition(Node* &tail, Node* head, int position, int d){
// first position mai node add
    if(position==1){
    insertAtHead(head,d);
         return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }//last position mai node add
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    //creting a node for d
    Node* nodetoinsert = new Node(d);

    
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

deleteNode( Node* &head, int possition){
    //deleteing first node
    if(possition == 1){
        Node* temp = head;
        head = head->next;
        //memory free start node
        temp->next= NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node*prev = NULL;
        int  cnt = 1;
        while(cnt < possition){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }    
    
    
}
int main(){
   
    //create a new Node
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail, 15);
    print(head);
    insertposition(tail,head,2,18);
    print(head);
    cout<<"head "<< head->data <<endl;
    cout<<"tail " <<tail->data <<endl;
    deleteNode(head, 3);
    print(head);
    cout<<"tail " <<tail->data <<endl;
     
    return 0;
}
