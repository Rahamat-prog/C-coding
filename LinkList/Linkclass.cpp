#include<iostream>
#include<conio.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
 
int main(){
   
    //create a new Node
    Node* node1 = new Node();
    cout<< node1->data <<" ";
    cout<< node1->next;
    return 0;
}