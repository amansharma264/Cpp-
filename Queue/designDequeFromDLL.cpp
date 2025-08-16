#include<iostream>
using namespace std;
class Node{ // user defined datatypes 
    public:
        int val;
        Node* next;
        Node* prev; // extra for DLL
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL; // extra for DLL
        }
};

class Deque{ // user defined data structure 
public:
    Node* head;
    Node* tail;
    int s;
    Deque(){
        head = tail = NULL;
        s = 0;
    }
    void pushBack(int val){
        Node* temp = new Node(val);
        if(s == 0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;

        }
        s++;
    }

    void pushFront(int val){
        Node* temp = new Node(val);
        if(s == 0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        s++;
    }

    

    void popFront(){
        if(s == 0){
            cout << "List is empty";
            return;
        }
        head = head->next;
        s--;
    }

    void popBack(){
        if(s == 0){
            cout << "List is empty";
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        s--;
    }

    int front(){
        if(s == 0){
            cout << "Queue is empty";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(s == 0){
            cout << "Queue is empty";
            return -1;
        }
        return tail->val;
    }

    int size(){
        return s;
    }
    bool empty(){
        if(s == 0) return true;
        else return false;
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
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.display();
    dq.popBack();
    dq.display();
    dq.popFront();
    dq.display();
}