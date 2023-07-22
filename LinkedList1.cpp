#include<iostream>
using namespace std;

class Node{
    public:
           int data;
           Node *next;

    //constructor
    Node( int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor for freeing up memory when deletion happens
    ~Node() {

        int value = this-> data;
        //memory free
        if(this -> next != NULL){
            delete next;
            this-> next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void InsertAtHead(Node* &head , int d){
    //New node create
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;

}
void InsertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

void print(Node* &head){

    Node* temp = head;
    while(temp != NULL){
         cout << temp -> data << " " ;
         temp = temp->next;
    }
cout << endl;

}

void InsertAtPosition(Node* &tail, Node* &head,int position ,int d){
    Node* temp = head;
    int cnt = 1;

    //condition to insert at first position
    if(position == 1){
        InsertAtHead(head , d);
        return;
    }


    while(cnt < position-1){
        temp = temp->next;
        cnt++; 
    }

    //inserting at last position
    if(temp ->next == NULL){
        InsertAtTail(tail , d);
        return;
    }
    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp->next;
    temp -> next = nodeToInsert;

}

// Deletion of node in linked list 
void deleteNode(int position , Node* &head ){
    //deleting first position element
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        //memory free start node
        temp ->next = NULL;
        delete temp;
    }
    else{
        //deleting  any middle and last place elements
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr ->next = NULL;
        delete curr;

    }
}

int main(){

   // created a new node
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    print(head);
    
    //to call head function
    // InsertAtHead(head , 12);
    // print(head);

    // InsertAtHead(head , 15 );
    // print(head);
    InsertAtTail(tail , 12);
    print(head);

    InsertAtTail(tail , 15);
    print(head);

    InsertAtPosition(tail, head , 4 , 22);
    print(head);

    cout << "head" << head -> data << endl;
    cout << "tail" << tail -> data << endl;

    deleteNode(3 , head);
    print(head);

    



}
