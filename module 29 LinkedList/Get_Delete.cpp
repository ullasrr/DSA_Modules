#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList{
public:
Node* head;
Node* tail;
int size;

LinkedList(){
    this->size=0;
    this->head=NULL;
    this->tail=NULL;
}

void Insert(int idx,int val){
    if(idx<0 || idx> size){
        cout<<"index cannot be negative "<<endl;
    }
    else if(idx==0){
        InsertAtHead(val);
        size++;
    }
    else if(idx==size){
        InsertAtEnd(val);
        size++;
    }
    else{
    Node* t=new Node(val);
    Node* temp=head;
    while(idx-1!=0){
        temp=temp->next;
        idx--;
    }
    t->next=temp->next;
    temp->next=t;

    size++;

    }
}

void InsertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;

}

void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
}

void InsertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;

        }
        else{
            tail->next=temp;
            tail=temp;
        }
            size++;
}

int getAtIdx(int idx){
    if(idx<0 || idx>=size){
        cout<<"Invalid"<<endl;
        return -1;
    }
    else if(idx==0){
        return head->val;
    }
    else if(idx==size-1){
        return tail->val;
    }
    else{
        Node* temp=head;
        for(int i=1;i<=idx;i++){
            temp=temp->next;
        }
        return temp->val;
    }
}

void deleteEleHead(){
    if(size==0) {
        cout<<"Linked List is empty"<<endl;
        return;
    }
        head=head->next;
        size--;
    
}

void delete_tail(){
    if(size==0) {
        cout<<"Linked List is empty"<<endl;
        return;
    }
    Node* temp=head;
    while(temp->next->next !=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    size--;
    return;
    
}

void delete_any_idx(int idx){
    if(idx<0 || idx>size-1){
        cout<<"invalid"<<endl;
        return;
    }
    else if(idx==0){
        deleteEleHead();
        return;
    }
    else if(idx==size){
        delete_tail();
        return;
    }
    else{
    
    Node* temp=head;
    while(idx>1){
        temp=temp->next;
        idx--;
    }
    temp->next=temp->next->next;
    size--;
    return;}
}

};

int main(){
LinkedList* ll=new LinkedList();   // Here the part of arrow is important 
ll->InsertAtEnd(10);               // If the class was made statically then we have to use dot operator
ll->InsertAtEnd(20);               // As I created it dynamically, I'm using arrow operator
ll->InsertAtEnd(30);
ll->InsertAtEnd(40);
ll->InsertAtHead(50);
ll->InsertAtHead(24);
ll->Insert(4,80);
ll->display();
// cout<<ll->getAtIdx(3)<<endl; 
// ll->deleteEleHead();
// ll->display();
// ll->delete_tail();
// ll->display();
ll->delete_any_idx(0);
ll->display();

return 0;
}