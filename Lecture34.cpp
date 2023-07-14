#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node *right;
    Node *left;


    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

void buildTree(Node* root){
    int var;
    cout<<"Enter the value : ";
    cin>>var;
    if(var==-1){
        return;
    }
    root = new Node(var);
    cout<<"Enter the data which you want to enter at the left of the root node which is : "<<var<<" "<<endl;
    buildTree(root->left);
    cout<<"Enter the data which you want to enter at the right of the root node which is : "<<var<<" "<<endl;
    buildTree(root->right);
}


int main(){
    Node *root;
    buildTree(root);
    return 0;
}
