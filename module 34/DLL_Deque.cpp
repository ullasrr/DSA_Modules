#include<iostream>
using namespace std;


class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->next=NULL;
        this->prev=NULL;
        this->val=val;
    }


};

class Deque{
    public:
    Node* head;
    Node* tail;
    int size;

    Deque(){
        head=tail=NULL;
        size=0;

    }

    void pushBack(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
            
        }
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;

        }
        size++;
    }

    void pushFront(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;

        }
        size++;
    }

    void popFront(){
        if(size==0){
            cout<<"the queue is empty ";
            return;
        }
        head=head->next;
        if(head) head->prev=NULL;
        if(head==NULL) tail=NULL;
        size--;

    }
    
    void popBack(){
        if(size==0){
            cout<<"the queue is empty ";
            return;
        }
Node* temp=tail->prev;
temp->next=NULL;
tail=temp;
size--;

    }


};



int main(){

    

return 0;
}