#include<iostream>
using namespace std;
class Node{ // Linked List Node
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
int main(){
    // 10 20 30 40
    Node a(10); 
    Node b(20);  
    Node c(30); 
    Node d(40);
    // forming linklist
    a.next = &b;
    b.next = &c;
    c.next = &d;

    // cout <<(*(a.next)).val;
    // cout << (b.next)->val;
    // a-> next se b ka address nikalta hai value nhi nikalta hai 
    // ((a.next)->next)->val
    // print karani hai d ki value
    // *(*(*(a.next).next)).val = b.next
    // cout << (((a.next)->next)->next)->val;

    Node temp = a;
    int x = 9;
    while(1){
        cout << temp.val<< " ";
        if(temp.next == NULL) break;
        temp = (*(temp.next));
    }
}