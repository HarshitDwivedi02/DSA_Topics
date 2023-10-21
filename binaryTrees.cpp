#include<iostream>
using namespace std;



class node{
    public:
       int data;
       node* left;
       node* right;

    node(int d){   // constructor for node elements
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

// Function for building the tree 
node* buildTree(node* root){

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for the left child of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for the right child of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}

// Level Order traversal

void levelOrderTraversal(){
    
}

int main(){

    node* root = NULL;
    
    //Creating a tree 

    root = buildTree(root);

    return 0;
}