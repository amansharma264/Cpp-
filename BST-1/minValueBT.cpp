#include<iostream>
using namespace std;

class Node{ // This is a tree Node
public: 
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void displayTree(Node* root){
    if(root == NULL) return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);

}

int minimum(Node* root){
    if(root == NULL) return INT_MAX;
    int res = root->val;
    int leftRes = minimum(root->left);
    int rightRes = minimum(root->right);
    if(leftRes < res) res = leftRes;
    if(rightRes < res) res = rightRes;
    return res;
    
}

int main(){
    Node* a = new Node(1); // root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displayTree(a);
    cout << endl;
    cout << minimum(a) << endl;
}