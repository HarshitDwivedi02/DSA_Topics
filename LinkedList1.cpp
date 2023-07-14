#include<iostream>
using namespace std;

class Node{
    public:
           int data;
           Node *next;

void InsertAtHead(Node* &head , int d){
    // To create a new node 
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
}
