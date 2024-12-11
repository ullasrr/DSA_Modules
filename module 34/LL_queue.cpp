#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->next=NULL;
        this->val=val;
    }

};

class Queue{
    public:
    Node* head;
    Node* tail;
    int size;

    Queue(){
        head=tail=NULL;
        size=0;

    }

    void push(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            temp=tail;

        }
        size++;
    }

    void pop(){
        if(size==0){
            cout<<"queue is empty  ";
            return;
        }
        
        head->next=head;
        size--;
    }

    int front(){
        return head->val;
    }

    int back(){
        return tail->val;
    }

    void display(){
        Node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->val;
            temp=temp->next;
        }
        
    }



    
};
int main(){

    Queue q;

return 0;
}