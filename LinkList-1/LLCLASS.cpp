#include<iostream>
using namespace std;
class Node{ // user defined datatypes 
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

class LinkList{ // user defined data structure 
public:
    Node* head;
    Node* tail;
    int size;
    LinkList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val){
        if(idx < 0 || idx > size) cout << "Invalid index" << endl;
        else if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 1; i<= idx-1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    int getAtIdx(int idx){
        if(idx < 0 || idx >= size){
            cout << "Invalid Index";
            return -1;
        }
        else if(idx == 0) return head->val;
        else if(idx == size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i = 1; i<=idx; i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteAthead(){
        if(size == 0){
            cout << "List is empty";
            return;
        }
        head = head->next;
        size--;
    }

    void deleteAttail(){
        if(size == 0){
            cout << "List is empty";
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtindex(int idx){
        if(size == 0){
            cout << "List is empty";
            return;
        }
        else if(idx < 0 || idx >= size){
            cout << "Invalid index";
            return;
        }
        else if(idx == 0) return deleteAthead();
        else if(idx == size-1) return deleteAttail();
        else{
            Node* temp = head;
            for(int i = 1; i<= idx-1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->val<< " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    LinkList ll; //{ }
    ll.insertAtTail(10); // {10->NULL}
    ll.display();
    ll.insertAtTail(20); //{10 -> 20->NULL}
    ll.display();
    ll.insertAtTail(30); // {10->20->30->NULL}
    ll.insertAtTail(40); // {10->20->30->40->NULL}
    ll.display();
    ll.insertAtHead(50);
    ll.display();
    ll.insertAtHead(24);
    ll.display();
    ll.insertAtIdx(4,80); 
    ll.display();
    cout << ll.getAtIdx(7)<< endl;
    ll.deleteAthead();
    ll.display();
    ll.deleteAttail();
    ll.display();
    ll.deleteAtindex(3);
    ll.display();
}